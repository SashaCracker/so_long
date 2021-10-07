/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_steps_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:05:25 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:05:32 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_steps_string(t_info *info)
{
	int		a;
	int		b;
	char	*step;
	char	*eggs;
	void	*string_background;

	a = 100;
	b = 24;
	step = ft_itoa(info->step);
	eggs = ft_itoa(info->eggs);
	if (info->step >= 1)
		printf("you've made %d steps\n", info->step);
	string_background = mlx_xpm_file_to_image(info->mlx, \
	"./pic/string_background.xpm", &a, &b);
	mlx_put_image_to_window(info->mlx, info->mlx_win, string_background, 5, 5);
	mlx_string_put(info->mlx, info->mlx_win, 23, 25, 0x0000FF00, "steps: ");
	mlx_string_put(info->mlx, info->mlx_win, 75, 25, 0x0000FF00, step);
	mlx_put_image_to_window(info->mlx, info->mlx_win, string_background, 105, \
	5);
	mlx_string_put(info->mlx, info->mlx_win, 123, 25, 0x0000FF00, "eggs: ");
	mlx_string_put(info->mlx, info->mlx_win, 175, 25, 0x0000FF00, eggs);
	free(step);
	free(eggs);
}
