/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:06:19 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:06:21 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	ft_free(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
}

static int	ft_rest_execution(char **rest, char **line)
{
	char	*t;
	char	*p;
	char	*k;

	if (!(ft_strchr(*rest, '\n')))
		return (0);
	p = ft_strchr(*rest, '\n');
	*p = '\0';
	p++;
	t = *line;
	*line = ft_strdup(*rest);
	if (*line == 0)
		return (-1);
	k = *rest;
	*rest = ft_strdup(p);
	if (*rest == 0)
		return (-1);
	ft_free(&t);
	ft_free(&k);
	return (1);
}

static int	ft_last_line(char **line, char **rest, char **buf)
{
	char	*p;

	p = *line;
	*line = ft_strdup(*rest);
	if (*line == 0)
		return (-1);
	ft_free(&p);
	ft_free(buf);
	ft_free(rest);
	return (0);
}

static int	ft_read(int fd, char **buf, char **rest, char **line)
{
	char	*p;
	int		n;

	n = 1;
	while (n != 0)
	{
		n = (int) read(fd, *buf, BUFFER_SIZE);
		(*buf)[n] = '\0';
		p = *rest;
		*rest = ft_strjoin(*rest, *buf);
		ft_free(&p);
		if (*rest == 0)
			return (-1);
		if (ft_rest_execution(rest, line) == 1)
		{
			ft_free(buf);
			return (1);
		}
		if (ft_rest_execution(rest, line) == -1)
			return (-1);
	}
	return (ft_last_line(line, rest, buf));
}

int	get_next_line(int fd, char **line)
{
	char		*buf;
	static char	*rest;

	if (!line)
		return (-1);
	if (BUFFER_SIZE <= 0)
		return (-1);
	if (read(fd, 0, 0) < 0)
		return (-1);
	*line = ft_strdup("");
	if (*line == 0)
		return (-1);
	if (!rest)
		rest = ft_strdup("");
	if (rest == 0)
		return (-1);
	if (ft_rest_execution(&rest, line) == 1)
		return (1);
	if (ft_rest_execution(&rest, line) == -1)
		return (-1);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == 0)
		return (-1);
	return (ft_read(fd, &buf, &rest, line));
}
