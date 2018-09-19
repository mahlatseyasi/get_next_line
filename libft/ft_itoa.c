/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:35:37 by mkhoza            #+#    #+#             */
/*   Updated: 2018/05/29 13:02:05 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		negative;
	int		cur;
	char	*str;

	negative = 0;
	if (n < 0)
		negative = 1;
	cur = n;
	len = 1;
	while (cur /= 10)
		len++;
	str = ft_strnew(len + negative);
	if (str == NULL)
		return (NULL);
	if (negative)
		str[0] = '-';
	while (len--)
	{
		str[len + negative] = (negative ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (str);
}
