/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collectible.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:00:12 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:00:14 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_draw1(t_info *info, int i, int x, int y)
{
	void	*img_collectible1;
	void	*img_collectible2;

	img_collectible1 = mlx_xpm_file_to_image(info->mlx, \
	"./pic/collectible1.xpm", &info->width, &info->height);
	img_collectible2 = mlx_xpm_file_to_image(info->mlx, \
	"./pic/collectible2.xpm", &info->width, &info->height);
	if (i == 1)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		img_collectible1, (x * info->width), (y * info->height));
	}
	if (i == 2)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		img_collectible2, (x * info->width), (y * info->height));
	}
	return (i);
}

static int	ft_draw2(t_info *info, int i, int x, int y)
{
	void	*img_collectible3;
	void	*img_collectible4;

	img_collectible3 = mlx_xpm_file_to_image(info->mlx, \
	"./pic/collectible3.xpm", &info->width, &info->height);
	img_collectible4 = mlx_xpm_file_to_image(info->mlx, \
	"./pic/collectible4.xpm", &info->width, &info->height);
	if (i == 3)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		img_collectible3, (x * info->width), (y * info->height));
	}
	if (i == 4)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		img_collectible4, (x * info->width), (y * info->height));
	}
	return (i);
}

static int	ft_draw3(t_info *info, int i, int x, int y)
{
	void	*img_collectible5;

	img_collectible5 = mlx_xpm_file_to_image(info->mlx, \
	"./pic/collectible5.xpm", &info->width, &info->height);
	if (i == 5)
	{
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		img_collectible5, (x * info->width), (y * info->height));
		i = 0;
	}
	return (i);
}

void	ft_collectible(t_info *info)
{
	int	y;
	int	x;
	int	i;

	i = 1;
	y = 0;
	while (y < info->rows)
	{
		x = 0;
		while (x < info->len)
		{
			if (info->map[y][x] == 'C')
			{
				i = ft_draw1(info, i, x, y);
				i = ft_draw2(info, i, x, y);
				i = ft_draw3(info, i, x, y);
				i++;
			}
			x++;
		}
		y++;
	}
}
