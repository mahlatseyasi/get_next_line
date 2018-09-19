/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:02:57 by mkhoza            #+#    #+#             */
/*   Updated: 2018/05/25 09:30:16 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int i, size_t size)
{
	unsigned char	*cur;

	if (size == 0)
		return (ptr);
	cur = (unsigned char *)ptr;
	while (size--)
	{
		*cur = (unsigned char)i;
		if (size)
			cur++;
	}
	return (ptr);
}
