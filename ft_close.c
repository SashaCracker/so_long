/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:00:02 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:00:05 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(t_info *info)
{
	mlx_clear_window(info->mlx, info->mlx_win);
	mlx_destroy_window(info->mlx, info->mlx_win);
	exit(0);
}
