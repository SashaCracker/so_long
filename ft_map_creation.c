/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_creation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:02:32 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:02:34 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_map_creation(char *argv, int rows)
{
	char	*line;
	int		fd;
	char	**map;
	int		i;

	i = 0;
	fd = open(argv, O_RDONLY);
	map = malloc(sizeof (char *) * (rows + 1));
	while (i < rows)
	{
		get_next_line(fd, &line);
		map[i] = ft_strdup(line);
		i++;
	}
	map[i] = ft_strdup("\0");
	close(fd);
	return (map);
}
