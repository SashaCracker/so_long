/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_walls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:05:46 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:05:48 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_walls(t_info *info)
{
	int		y;
	int		x;
	void	*img_corner2;

	img_corner2 = mlx_xpm_file_to_image(info->mlx, "./pic/corner2.xpm", \
	&info->width, &info->height);
	y = 0;
	while (y < info->rows)
	{
		x = 0;
		while (x < info->len)
		{
			if (info->map[y][x] == '1')
			{
				mlx_put_image_to_window(info->mlx, info->mlx_win, img_corner2, \
				(x * info->width), (y * info->height));
			}
			x++;
		}
		y++;
	}
}
