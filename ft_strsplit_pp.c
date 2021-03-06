/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_pp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opettex- <opettex-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 17:39:00 by opettex-          #+#    #+#             */
/*   Updated: 2016/06/29 18:04:08 by opettex-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_init_tab(char *str, int (*f)(char))
{
	int		i;
	int		y;
	char	**tab;

	i = 0;
	y = 1;
	while (str[i] != '\0')
	{
		if (f(str[i]) == 1)
		{
			y++;
			i++;
			while (f(str[i]) == 1)
				i++;
		}
		else
			i++;
	}
	if (!(tab = (char **)malloc(sizeof(char *) * y + 1)))
		return (NULL);
	tab[0] = str;
	tab[y] = NULL;
	return (tab);
}

static char	*ft_del_one_char(char *str, int pos)
{
	int i;

	i = pos;
	while (str[i] != '\0')
	{
		str[i] = str[i + 1];
		i++;
	}
	return (str);
}

char		**ft_strsplit_pp(char *str, int (*f)(char))
{
	char	**tab;
	int		i;
	int		y;

	i = 0;
	y = 0;
	str = ft_strtrim_pp(str, f);
	tab = ft_init_tab(str, f);
	while (str[i] != '\0')
	{
		if (f(str[i]) == 1 && str[i - 1] != '\\')
		{
			str[i] = '\0';
			y++;
			i++;
			while (f(str[i]) == 1)
				i++;
			tab[y] = &(str[i]);
		}
		else if (f(str[i]) == 1 && str[i - 1] == '\\')
			str = ft_del_one_char(str, i - 1);
		i++;
	}
	free(str);
	return (tab);
}
