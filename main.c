/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:06:41 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:06:42 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_info_init(t_info *info, char *argv)
{
	info->width = 50;
	info->height = 50;
	info->step = 0;
	info->rows = ft_rows_number(argv);
	info->map = ft_map_creation(argv, info->rows);
	info->len = (int) ft_strlen(info->map[0]);
	info->left = 0;
	info->right = 0;
	info->up = 0;
	info->down = 0;
	info->counter_player = 0;
	info->counter_enemy = 0;
	info->eggs = 0;
	info->the_end = 0;
}

int	main(int argc, char **argv)
{
	t_info	info;

	if (argc == 2)
	{
		if (ft_check_file(argv[1]) == -1)
			return (-1);
		ft_info_init(&info, argv[1]);
		ft_objects_quantity(&info);
		if (ft_map_parsing(&info) == -1)
		{
			ft_free_all(&info);
			exit(1);
		}
		ft_game_window(&info);
	}
	else
		ft_putstr("Error - wrong number of arguments.\n");
	ft_free_all(&info);
	while (1)
	{

	}
	return (0);
}
