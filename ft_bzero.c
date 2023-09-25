/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:22:35 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/19 13:23:34 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*p;

	p = (char *)s;
	while (len--)
	*p++ = 0;
}
/*
#include <stdio.h>
#include <stddef.h>

void    ft_bzero(void *s, size_t len);
int main()
{
    char arreglo[10] = "Hola Mulendo";
    printf("Alentes de bzero: %s\len", arreglo);
    ft_bzero(arreglo, sizeof(arreglo));
    printf("Después de bzero: %s\len", arreglo);
    return(0);
}
*/