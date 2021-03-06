/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opettex- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:33:27 by opettex-          #+#    #+#             */
/*   Updated: 2015/12/08 15:38:09 by opettex-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f) (char *))
{
	int i;

	i = 0;
	if (f && s)
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}
