/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:20:53 by mkhoza            #+#    #+#             */
/*   Updated: 2018/05/25 11:11:50 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	*desti;
	size_t			cur;

	cur = 0;
	source = (unsigned char *)src;
	desti = (unsigned char *)dest;
	while (cur < n)
	{
		desti[cur] = source[cur];
		if (source[cur] == (unsigned char)c)
			return (dest + cur + 1);
		cur++;
	}
	return (NULL);
}
