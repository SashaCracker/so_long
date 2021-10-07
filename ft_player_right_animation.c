/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_right_animation.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:04:43 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:04:44 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_frame1(t_info *info, int x, int y, void *img_background)
{
	void	*right2;
	void	*right3;

	right2 = mlx_xpm_file_to_image(info->mlx, "./pic/right2.xpm", \
	&info->width, &info->height);
	right3 = mlx_xpm_file_to_image(info->mlx, "./pic/right3.xpm", \
	&info->width, &info->height);
	if (info->counter_player == 0)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, right2, \
		(x * info->width), (y * info->height));
	}
	if (info->counter_player == 10)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, right3, \
		(x * info->width), (y * info->height));
	}
}

static void	ft_frame2(t_info *info, int x, int y, void *img_background)
{
	void	*right4;
	void	*right5;

	right4 = mlx_xpm_file_to_image(info->mlx, "./pic/right4.xpm", \
	&info->width, &info->height);
	right5 = mlx_xpm_file_to_image(info->mlx, "./pic/right5.xpm", \
	&info->width, &info->height);
	if (info->counter_player == 20)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, right4, \
		(x * info->width), (y * info->height));
	}
	if (info->counter_player == 30)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, right5, \
		(x * info->width), (y * info->height));
	}
}

static void	ft_frame3(t_info *info, int x, int y, void *img_background)
{
	void	*right6;
	void	*right7;

	right6 = mlx_xpm_file_to_image(info->mlx, "./pic/right6.xpm", \
	&info->width, &info->height);
	right7 = mlx_xpm_file_to_image(info->mlx, "./pic/right1.xpm", \
	&info->width, &info->height);
	if (info->counter_player == 40)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, right6, \
		(x * info->width), (y * info->height));
	}
	if (info->counter_player == 50)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, right7, \
		(x * info->width), (y * info->height));
	}
}

static void	ft_frame4(t_info *info, int x, int y, void *img_background)
{
	void	*right1;

	right1 = mlx_xpm_file_to_image(info->mlx, "./pic/right1.xpm", \
	&info->width, &info->height);
	if (info->counter_player == 60)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, right1, \
		(x * info->width), (y * info->height));
		info->counter_player = 0;
	}
}

void	ft_player_right_animation(t_info *info, int i, int j)
{
	void	*img_background;
	int		x;
	int		y;

	x = info->x;
	y = info->y;
	img_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/background.xpm", &info->width, &info->height);
	if (info->map[j][i] == 'P')
	{
		ft_frame1(info, x, y, img_background);
		ft_frame2(info, x, y, img_background);
		ft_frame3(info, x, y, img_background);
		ft_frame4(info, x, y, img_background);
	}
}
