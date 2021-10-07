/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_it_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:02:10 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:02:12 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_impossible_game(t_info *info)
{
	if (info->C == 0)
	{
		ft_putstr("Impossible game - nothing to collect.\n");
		return (-1);
	}
	if (info->P == 0)
	{
		ft_putstr("Impossible game without a player?\n");
		return (-1);
	}
	if (info->E == 0)
	{
		ft_putstr("Impossible game - there is no exit.\n");
		return (-1);
	}
	return (0);
}

int	ft_is_it_game(t_info *info)
{
	if (ft_impossible_game(info) == -1)
		return (-1);
	if (info->P > 1)
	{
		ft_putstr("Impossible game - sorry, this game is not so smart to play" \
		" with more than 1 player=)\n");
		return (-1);
	}
	if (info->E > 1)
	{
		ft_putstr("Impossible game - you've got more than 1 exit.\n");
		return (-1);
	}
	return (0);
}
