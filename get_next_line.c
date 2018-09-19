/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 07:21:00 by mkhoza            #+#    #+#             */
/*   Updated: 2018/06/28 07:26:34 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_check(int fd, char **line, char **store)
{
	int		bytes;
	char	*temp;

	bytes = 0;
	while (store[fd][bytes] != '\n' && store[fd][bytes] != '\0')
		bytes++;
	if (store[fd][bytes] == '\0')
	{
		*line = ft_strdup(store[fd]);
		ft_strdel(&store[fd]);
	}
	else if (store[fd][bytes] == '\n')
	{
		*line = ft_strsub(store[fd], 0, bytes);
		temp = ft_strdup(&store[fd][bytes + 1]);
		free(store[fd]);
		store[fd] = temp;
		if (store[fd][0] == '\0')
			ft_strdel(&store[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*store[1];
	char			buff[BUFF_SIZE + 1];
	int				b_read;
	char			*temp;

	if (fd < 0 || !line)
		return (-1);
	while ((b_read = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[b_read] = '\0';
		if (store[fd] == NULL)
			store[fd] = ft_strnew(1);
		temp = ft_strjoin(store[fd], buff);
		free(store[fd]);
		store[fd] = temp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (b_read < 0)
		return (-1);
	else if (b_read == 0 && (store[fd] == NULL || store[fd][0] == '\0'))
		return (0);
	return (ft_check(fd, line, store));
}
