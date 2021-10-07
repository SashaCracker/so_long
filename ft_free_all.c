/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:01:21 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:01:23 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_all(t_info *info)
{
	int	i;

	i = 0;
	if (info->map != NULL)
	{
		while (i < info->rows)
			free(info->map[i++]);
		free(info->map);
		info->map = NULL;
	}
}
