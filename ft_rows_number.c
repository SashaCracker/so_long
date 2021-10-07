/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rows_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:05:12 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:05:14 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_rows_number(char *argv)
{
	int		k;
	char	*line;
	int		fd;
	int		rows;

	k = 1;
	line = NULL;
	rows = 0;
	fd = open(argv, O_RDONLY);
	while (k == 1)
	{
		k = get_next_line(fd, &line);
		if (k == -1)
			return (-1);
		rows++;
	}
	close(fd);
	return (rows);
}
