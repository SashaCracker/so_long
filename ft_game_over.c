/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_over.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:01:39 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:01:41 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_game_over(t_info *info)
{
	void	*img_game_over;
	void	*string_background;
	int		a;
	int		b;

	a = 100;
	b = 24;
	mlx_clear_window(info->mlx, info->mlx_win);
	ft_map_dell(info);
	ft_background(info);
	img_game_over = mlx_xpm_file_to_image(info->mlx, "./pic/exit3.xpm", \
	&info->width, &info->height);
	mlx_put_image_to_window(info->mlx, info->mlx_win, img_game_over, \
	(info->len / 2 * info->width - 25), (info->rows / 2 * info->height - 50));
	string_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/string_background.xpm", &a, &b);
	mlx_put_image_to_window(info->mlx, info->mlx_win, string_background, \
	(info->len) / 2 * info->width - 50, (info->rows) / 2 * info->height);
	mlx_string_put(info->mlx, info->mlx_win, \
	(info->len) / 2 * info->width + 18 - 50, \
	(info->rows) / 2 * info->height + 20, 0x0000FF00, "YOU LOSE!");
}
