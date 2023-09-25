/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:54:07 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/22 14:56:27 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if (!dst && src == 0)
		return (0);
	d = (char *)dst;
	s = (char *)src;
	while (len > 0)
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
	return (dst);
}
/*
#include <stdio.h>

int main()
{
    char origen[] = "Hola, mundo!";
    char destino[11];
    ft_memcpy(destino, origen, 15);
    printf("%s\n", destino);
    return(0);
}
*/
