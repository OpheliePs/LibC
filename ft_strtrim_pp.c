/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_pp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opettex- <opettex-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 17:38:26 by opettex-          #+#    #+#             */
/*   Updated: 2016/06/27 17:38:40 by opettex-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy(char *dest, const char *str, int (*f)(char))
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (f(str[i]) == 1)
		i++;
	while (str[i] != '\0')
	{
		dest[y] = str[i];
		y++;
		i++;
	}
	y--;
	while (f(dest[y]) == 1 && dest[y - 1] != '\\')
	{
		dest[y] = '\0';
		y--;
	}
	return (dest);
}

char		*ft_strtrim_pp(char const *s, int (*f)(char))
{
	char	*str;
	int		i;

	i = ft_strlen(s);
	if (!(str = ft_strnew(i)))
		return (NULL);
	str = cpy(str, s, f);
	return (str);
}
