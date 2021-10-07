/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:01:09 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:01:12 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_exit(t_info *info)
{
	int		y;
	int		x;
	void	*img_exit;

	img_exit = mlx_xpm_file_to_image(info->mlx, "./pic/exit.xpm", \
	&info->width, &info->height);
	y = 0;
	while (y < info->rows)
	{
		x = 0;
		while (x < info->len)
		{
			if (info->map[y][x] == 'E')
			{
				mlx_put_image_to_window(info->mlx, info->mlx_win, img_exit, \
				(x * info->width), (y * info->height));
			}
			x++;
		}
		y++;
	}
}
