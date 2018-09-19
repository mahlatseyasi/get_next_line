/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:41:49 by mkhoza            #+#    #+#             */
/*   Updated: 2018/06/15 14:36:27 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;

	i = ft_strlen(src);
	if (!(dup = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	dup[i] = '\0';
	while (i-- > -1)
		dup[i] = src[i];
	return (dup);
}
