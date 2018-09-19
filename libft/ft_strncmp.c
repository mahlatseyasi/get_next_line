/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:35:05 by mkhoza            #+#    #+#             */
/*   Updated: 2018/06/15 14:30:09 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = (len <= len2) ? len + 1 : len2 + 1;
	len = (len <= n) ? len : n;
	result = ft_memcmp((void *)s1, s2, len);
	return (result);
}
