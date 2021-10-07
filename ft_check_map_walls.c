/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_walls.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:58:05 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 16:58:07 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_broken_walls(char *line, int len)
{
	if ((line[0] != '1') || (line[len - 1] != '1'))
	{
		ft_putstr("Invalid map - you've got hole in your wall.\n");
		return (-1);
	}
	return (0);
}

int	ft_check_map_walls(char *line)
{
	int	i;
	int	len;

	i = 0;
	len = (int) ft_strlen(line);
	if (ft_broken_walls(line, len) == -1)
		return (-1);
	i++;
	while (i != (len - 1))
	{
		if ((line[i] != '0') && (line[i] != '1') && (line[i] != 'C') \
		&& (line[i] != 'E') && (line[i] != 'P') && (line[i] != 'V'))
		{
			ft_putstr("Invalid map - unexpected symbols are inside the map.\n");
			return (-1);
		}
		i++;
	}
	return (0);
}
