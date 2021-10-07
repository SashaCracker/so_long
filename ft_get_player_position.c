/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_player_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:02:00 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:02:02 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_player_position(t_info *info)
{
	int	y;
	int	x;

	y = 0;
	while (y < info->rows)
	{
		x = 0;
		while (x < info->len)
		{
			if (info->map[y][x] == 'P')
			{
				info->x = x;
				info->y = y;
			}
			x++;
		}
		y++;
	}
}
