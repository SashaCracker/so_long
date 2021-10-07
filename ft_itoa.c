/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:02:20 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:02:22 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_razryad(int n)
{
	int	d;

	d = 1;
	if (n == -2147483648)
		d = 10;
	if ((n >= -2147483647) && (n < 0))
		n = n * (-1);
	while (((n / 10) != 0) && (n >= 0))
	{
		d++;
		n = n / 10;
	}
	return (d);
}

static int	ft_ten_power(int n)
{
	int	power;

	power = 1;
	n = n - 1;
	while (n > 0)
	{
		power = power * 10 ;
		n--;
	}
	if (power == 1)
		power = 10;
	return (power);
}

static char	*ft_itoa_print(char *res, int i, int n)
{
	int	razr;

	razr = ft_razryad(n);
	while (razr > 0)
	{
		if (razr == 1)
		{
			res[i] = n + 48;
			i++;
		}
		else
		{
			res[i] = (n / ft_ten_power(razr)) + 48;
			n = n % ft_ten_power(razr);
			i++;
		}
		razr--;
	}
	res[i] = '\0';
	return (res);
}

static char	*ft_malloc(int n, int razr)
{
	char	*res;

	if (n < 0)
		res = (char *) malloc(razr + 2);
	else
		res = (char *) malloc(razr + 1);
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	res = ft_malloc(n, ft_razryad(n));
	if (res == 0)
		return (0);
	i = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			n = 147483648;
			res[0] = '-';
			res[1] = '2';
			i = 2;
		}
		else
		{
			res[i] = '-';
			n = n *(-1);
			i++;
		}
	}
	return (ft_itoa_print(res, i, n));
}
