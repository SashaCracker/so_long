/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_top_bottom.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:57:55 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 16:57:57 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_map_top_bottom(char *line)
{
	while (*line)
	{
		if (*line != '1')
		{
			ft_putstr("Invalid map - you've got a hole in your wall.\n");
			return (-1);
		}
		line++;
	}
	return (0);
}
