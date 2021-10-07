/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button_press.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:57:28 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 16:57:30 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_button_press(int keycode, t_info *info)
{
	info->right = 1;
	info->left = 1;
	info->up = 1;
	info->down = 1;
	if (info->the_end == 1)
	{
		if (keycode == ESCAPE)
			ft_close(info);
		return (-1);
	}
	if ((keycode == UP) || (keycode == W))
		ft_move_up(info);
	else if ((keycode == DOWN) || (keycode == S))
		ft_move_down(info);
	else if ((keycode == LEFT) || (keycode == A))
		ft_move_left(info);
	else if ((keycode == RIGHT) || (keycode == D))
		ft_move_right(info);
	else if (keycode == ESCAPE)
		ft_close(info);
	else
		info->right = 2;
	return (keycode);
}
