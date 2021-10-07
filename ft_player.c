/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:04:27 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:04:28 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_player(t_info *info)
{
	int		y;
	int		x;
	void	*right1;

	x = info->x;
	y = info->y;
	right1 = mlx_xpm_file_to_image(info->mlx, "./pic/right1.xpm", \
	&info->width, &info->height);
	mlx_put_image_to_window(info->mlx, info->mlx_win, right1, \
	(x * info->width), (y * info->height));
}
