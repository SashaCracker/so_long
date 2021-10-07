/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:06:27 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:06:29 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if ((s1 == 0) || (s2 == 0))
		return (0);
	res = (char *) malloc(len + 1);
	if (res == 0)
		return (NULL);
	while (*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	*res = '\0';
	return (res - len);
}

char	*ft_strdup(char *s1)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = (int)ft_strlen(s1);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(char *s, int c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(s);
	while (i < (n + 1))
	{
		if (s[i] == ((char) c))
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
