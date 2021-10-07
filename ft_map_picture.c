/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_picture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:03:07 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:03:09 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_map_picture(t_info *info)
{
	ft_objects_quantity(info);
	ft_get_player_position(info);
	ft_background(info);
	ft_walls(info);
	ft_collectible(info);
	ft_enemy(info);
	ft_exit(info);
	ft_player(info);
	ft_steps_string(info);
	return (0);
}
