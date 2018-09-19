/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:46:51 by mkhoza            #+#    #+#             */
/*   Updated: 2018/06/15 14:35:56 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		end;

	i = 0;
	end = 0;
	while (i < n)
	{
		if (src[i] && !end)
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			end = 1;
		}
		i++;
	}
	return (dest);
}
