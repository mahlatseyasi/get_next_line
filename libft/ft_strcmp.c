/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:25:17 by mkhoza            #+#    #+#             */
/*   Updated: 2018/06/15 14:30:47 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen(str1) + 1;
	len2 = ft_strlen(str2) + 1;
	len = (len <= len2) ? len : len2;
	result = ft_memcmp((void *)str1, str2, len);
	return (result);
}
