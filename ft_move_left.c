/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:03:39 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:03:41 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_step(t_info *info, int x, int y, void *img_background)
{
	if ((info->map[y][x - 1] == 'E') && (info->C != 0))
		info->left = 2;
	if ((info->map[y][x - 1] == '0') || (info->map[y][x - 1] == 'C'))
	{
		if (info->map[y][x - 1] == 'C')
		{
			info->C = info->C - 1;
			info->eggs = info->eggs + 1;
		}
		info->map[y][x] = '0';
		info->map[y][x - 1] = 'P';
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		info->x = x - 1;
		info->step = info->step + 1;
		ft_steps_string(info);
		info->left = 2;
	}
}

void	ft_move_left(t_info *info)
{
	int		x;
	int		y;
	void	*img_background;

	img_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/background.xpm", &info->width, &info->height);
	x = info->x;
	y = info->y;
	if (info->map[y][x - 1] != '1')
	{
		ft_step(info, x, y, img_background);
		if ((info->map[y][x - 1] == 'V') || ((info->map[y][x - 1] == 'E') \
		&& (info->C == 0)))
		{
			if (info->map[y][x - 1] == 'V')
				ft_game_over(info);
			else
				ft_winner(info);
			info->the_end = 1;
		}
	}
	else
		info->left = 2;
}
