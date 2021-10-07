/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:56:39 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 16:56:51 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_right(t_info *info)
{
	int	i;
	int	j;

	j = 0;
	while (j < info->rows)
	{
		i = 0;
		while (i < info->len)
		{
			ft_enemy_animation(info, i, j);
			ft_player_right_animation(info, i, j);
			i++;
		}
		j++;
	}
}

static void	ft_left(t_info *info)
{
	int	i;
	int	j;

	j = 0;
	while (j < info->rows)
	{
		i = 0;
		while (i < info->len)
		{
			ft_enemy_animation(info, i, j);
			ft_player_left_animation(info, i, j);
			i++;
		}
		j++;
	}
}

int	ft_action(t_info *info)
{
	info->counter_player = info->counter_player + 1;
	info->counter_enemy = info->counter_enemy + 1;
	if ((info->right == 0) || (info->right == 2) || (info->up == 0) \
	|| (info->up == 2))
		ft_right(info);
	else if ((info->left == 0) || (info->left == 2) || (info->down == 0) \
	|| (info->down == 2))
		ft_left(info);
	return (0);
}
