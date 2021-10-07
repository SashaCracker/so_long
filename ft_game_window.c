/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:01:49 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:01:52 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_game_window(t_info *info)
{
	info->mlx = mlx_init();
	info->mlx_win = mlx_new_window(info->mlx, info->len * info->width, \
	info->rows * info->height, "./so_long");
	ft_map_picture(info);
	mlx_hook(info->mlx_win, 17, 0L, ft_close, info);
	mlx_key_hook(info->mlx_win, ft_button_press, info);
	mlx_loop_hook(info->mlx, ft_action, info);
	ft_steps_string(info);
	printf("you've made %d steps\n", info->step);
	mlx_loop(info->mlx);
}
