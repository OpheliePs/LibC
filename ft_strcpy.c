/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opettex- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 13:33:57 by opettex-          #+#    #+#             */
/*   Updated: 2015/12/29 13:15:03 by opettex-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	int nb;

	nb = 0;
	while (src[nb] != '\0')
	{
		dst[nb] = ((char*)src)[nb];
		nb++;
	}
	dst[nb] = '\0';
	return (dst);
}
