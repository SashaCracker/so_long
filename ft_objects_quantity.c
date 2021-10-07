/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_objects_quantity.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:04:07 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:04:08 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_quantity_init(t_info *info)
{
	info->P = 0;
	info->C = 0;
	info->E = 0;
	info->V = 0;
}

void	ft_objects_quantity(t_info *info)
{
	int	x;
	int	y;

	ft_quantity_init(info);
	y = 0;
	while (y < info->rows)
	{
		x = 0;
		while (x < info->len)
		{
			if (info->map[y][x] == 'P')
				info->P = info->P + 1;
			else if (info->map[y][x] == 'C')
				info->C = info->C + 1;
			else if (info->map[y][x] == 'E')
				info->E = info->E + 1;
			else if (info->map[y][x] == 'V')
				info->V = info->V + 1;
			x++;
		}
		y++;
	}
}
