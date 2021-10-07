/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrong_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:06:07 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:06:08 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_wrong_size(int len, int len_next, int row)
{
	if (row == len)
	{
		ft_putstr("Invalid map - it should be rectangular, not square!\n");
		return (-1);
	}
	if (row > len)
	{
		ft_putstr("Invalid map - it should be rectangular, but please make " \
		"it horizontal =) \n");
		return (-1);
	}
	if (len != len_next)
	{
		ft_putstr("Invalid map - sizes of rows are different.\n");
		return (-1);
	}
	return (0);
}
