/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:33:47 by mkhoza            #+#    #+#             */
/*   Updated: 2018/06/15 14:41:15 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cur;

	cur = (unsigned char *)s;
	while (n--)
	{
		if (*cur == (unsigned char)c)
			return (cur);
		if (n)
			cur++;
	}
	return (NULL);
}
