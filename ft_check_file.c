/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:57:40 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 16:57:42 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_file(char *argv)
{
	int	len;

	len = (int)ft_strlen(argv);
	printf("%d\n", len);
	if ((argv[len - 4] != '.') || (argv[len - 3] != 'b') \
	|| (argv[len - 2] != 'e') || (argv[len - 1] != 'r'))
	{
		ft_putstr("Invalid file - it has not .ber extension.\n");
		return (-1);
	}
	return (0);
}
