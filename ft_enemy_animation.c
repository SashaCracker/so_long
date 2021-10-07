/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enemy_animation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:00:49 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:01:01 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_part1(t_info *info, int i, int j)
{
	void	*enemy1;
	void	*img_background;

	img_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/background.xpm", &info->width, &info->height);
	enemy1 = mlx_xpm_file_to_image(info->mlx, "./pic/enemy1.xpm", \
	&info->width, &info->height);
	if (info->counter_enemy == 0)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(i * info->width), (j * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, enemy1, \
		(i * info->width), (j * info->height));
	}
}

static void	ft_part2(t_info *info, int i, int j)
{
	void	*enemy2;
	void	*img_background;

	enemy2 = mlx_xpm_file_to_image(info->mlx, "./pic/enemy2.xpm", \
	&info->width, &info->height);
	img_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/background.xpm", &info->width, &info->height);
	if (info->counter_enemy == 10)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(i * info->width), (j * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, enemy2, \
		(i * info->width), (j * info->height));
	}
}

static void	ft_part3(t_info *info, int i, int j)
{
	void	*enemy3;
	void	*img_background;

	enemy3 = mlx_xpm_file_to_image(info->mlx, "./pic/enemy3.xpm", \
	&info->width, &info->height);
	img_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/background.xpm", &info->width, &info->height);
	if (info->counter_enemy == 20)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(i * info->width), (j * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, enemy3, \
		(i * info->width), (j * info->height));
	}
}

static void	ft_part4(t_info *info, int i, int j)
{
	void	*enemy4;
	void	*img_background;

	enemy4 = mlx_xpm_file_to_image(info->mlx, "./pic/enemy4.xpm", \
	&info->width, &info->height);
	img_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/background.xpm", &info->width, &info->height);
	if (info->counter_enemy == 30)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(i * info->width), (j * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, enemy4, \
		(i * info->width), (j * info->height));
		info->counter_enemy = 0;
	}
}

void	ft_enemy_animation(t_info *info, int i, int j)
{
	if (info->map[j][i] == 'V')
	{
		ft_part1(info, i, j);
		ft_part2(info, i, j);
		ft_part3(info, i, j);
		ft_part4(info, i, j);
	}
}
