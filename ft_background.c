/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_background.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:57:16 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 16:57:19 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_background(t_info *info)
{
	int		x;
	int		y;
	void	*img_background;

	img_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/background.xpm", &info->width, &info->height);
	y = 0;
	while (y < info->rows)
	{
		x = 0;
		while (x < info->len)
		{
			mlx_put_image_to_window(info->mlx, info->mlx_win, img_background, \
			(x * info->width), (y * info->height));
			x++;
		}
		y++;
	}
}
