/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_left_animation.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:04:36 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:04:37 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_frame1(t_info *info, int x, int y, void *img_background)
{
	void	*left2;
	void	*left3;

	left2 = mlx_xpm_file_to_image(info->mlx, "./pic/left2.xpm", \
	&info->width, &info->height);
	left3 = mlx_xpm_file_to_image(info->mlx, "./pic/left3.xpm", \
	&info->width, &info->height);
	if (info->counter_player == 0)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, left2, \
		(x * info->width), (y * info->height));
	}
	if (info->counter_player == 10)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, left3, \
		(x * info->width), (y * info->height));
	}
}

static void	ft_frame2(t_info *info, int x, int y, void *img_background)
{
	void	*left4;
	void	*left5;

	left4 = mlx_xpm_file_to_image(info->mlx, "./pic/left4.xpm", \
	&info->width, &info->height);
	left5 = mlx_xpm_file_to_image(info->mlx, "./pic/left5.xpm", \
	&info->width, &info->height);
	if (info->counter_player == 20)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, left4, \
		(x * info->width), (y * info->height));
	}
	if (info->counter_player == 30)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, left5, \
		(x * info->width), (y * info->height));
	}
}

static void	ft_frame3(t_info *info, int x, int y, void *img_background)
{
	void	*left6;
	void	*left7;

	left6 = mlx_xpm_file_to_image(info->mlx, "./pic/left6.xpm", \
	&info->width, &info->height);
	left7 = mlx_xpm_file_to_image(info->mlx, "./pic/left7.xpm", \
	&info->width, &info->height);
	if (info->counter_player == 40)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, left6, \
		(x * info->width), (y * info->height));
	}
	if (info->counter_player == 50)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, left7, \
		(x * info->width), (y * info->height));
	}
}

static void	ft_frame4(t_info *info, int x, int y, void *img_background)
{
	void	*left1;

	left1 = mlx_xpm_file_to_image(info->mlx, "./pic/left1.xpm", \
	&info->width, &info->height);
	if (info->counter_player == 60)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
		(x * info->width), (y * info->height));
		mlx_put_image_to_window(info->mlx, info->mlx_win, left1, \
		(x * info->width), (y * info->height));
		info->counter_player = 0;
	}
}

void	ft_player_left_animation(t_info *info, int i, int j)
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
