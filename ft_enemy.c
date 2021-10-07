/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enemy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:00:31 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:00:40 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_enemy(t_info *info)
{
	int		y;
	int		x;
	void	*img_enemy;

	img_enemy = mlx_xpm_file_to_image(info->mlx, \
	"./pic/enemy1.xpm", &info->width, &info->height);
	y = 0;
	while (y < info->rows)
	{
		x = 0;
		while (x < info->len)
		{
			if (info->map[y][x] == 'V')
			{
				mlx_put_image_to_window(info->mlx, info->mlx_win, img_enemy, \
				(x * info->width), (y * info->height));
			}
			x++;
		}
		y++;
	}
}
