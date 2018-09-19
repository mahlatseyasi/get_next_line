/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:44:18 by mkhoza            #+#    #+#             */
/*   Updated: 2018/06/15 14:29:09 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	r;
	int		len;

	r = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? str++ : str;
	len = 0;
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str++ - '0';
		len++;
	}
	if (len > 10 && sign < 0)
		return (0);
	if (len > 10 && sign > 0)
		return (-1);
	return (sign * (int)r);
}
