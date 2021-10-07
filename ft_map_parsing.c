/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_parsing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:02:56 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:02:58 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_empty_map(t_info *info)
{
	if ((info->map[0][0] == '\0') || (info->map[0][0] == '\n') \
	|| (info->map[0][0] == ' '))
	{
		ft_putstr("Invalid map - is it empty?\n");
		return (-1);
	}
	return (0);
}

static int	ft_map_first_line(t_info *info, int i, int len)
{
	if (i == 0)
	{
		len = (int)ft_strlen(info->map[i]);
		if (ft_wrong_size(len, len, info->rows) == -1)
			return (-1);
		if (ft_check_map_top_bottom(info->map[i]) == -1)
			return (-1);
	}
	return (len);
}

static int	ft_map_midl(t_info *info, int i, int len)
{
	int	len_next;

	if ((i != 0) && (i != (info->rows - 1)))
	{
		len_next = (int) ft_strlen(info->map[i]);
		if (ft_wrong_size(len, len_next, 0) == -1)
			return (-1);
		len = len_next;
		if (ft_check_map_walls(info->map[i]) == -1)
			return (-1);
	}
	return (len);
}

static int	ft_map_last_line(t_info *info, int i, int len)
{
	int	len_next;

	if (i == (info->rows - 1))
	{
		len_next = (int) ft_strlen(info->map[i]);
		if (ft_wrong_size(len, len_next, 0) == -1)
			return (-1);
		if (ft_check_map_top_bottom(info->map[i]) == -1)
			return (-1);
	}
	return (len);
}

int	ft_map_parsing(t_info *info)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (ft_empty_map(info) == -1)
		return (-1);
	while (i < info->rows)
	{
		len = ft_map_first_line(info, i, len);
		if (len == -1)
			return (-1);
		len = ft_map_midl(info, i, len);
		if (len == -1)
			return (-1);
		len = ft_map_last_line(info, i, len);
		if (len == -1)
			return (-1);
		i++;
	}
	if (ft_is_it_game(info) == -1)
		return (-1);
	return (0);
}
