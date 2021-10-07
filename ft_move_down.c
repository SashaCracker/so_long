/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:03:23 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:03:25 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_step(t_info *info, int x, int y, void *img_background)
{
	if ((info->map[y + 1][x] == 'E') && (info->C != 0))
		info->down = 2;
	if ((info->map[y + 1][x] == '0') || (info->map[y + 1][x] == 'C'))
	{
		if (info->map[y + 1][x] == 'C')
		{
			info->C = info->C - 1;
			info->eggs = info->eggs + 1;
		}
		info->map[y][x] = '0';
		info->map[y + 1][x] = 'P';
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		info->y = y + 1;
		info->step = info->step + 1;
		ft_steps_string(info);
		info->down = 2;
	}
}

void	ft_move_down(t_info *info)
{
	int		x;
	int		y;
	void	*img_background;

	img_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/background.xpm", &info->width, &info->height);
	x = info->x;
	y = info->y;
	if (info->map[y + 1][x] != '1')
	{
		ft_step(info, x, y, img_background);
		if ((info->map[y + 1][x] == 'V') || ((info->map[y + 1][x] == 'E') \
		&& (info->C == 0)))
		{
			if (info->map[y + 1][x] == 'V')
				ft_game_over(info);
			else
				ft_winner(info);
			info->the_end = 1;
		}
	}
	else
		info->down = 2;
}
