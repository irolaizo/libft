/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:07:18 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/02 17:21:04 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/* int main (void)
{
    char *j;
	const char *s = "Hola, mundo!";
    int c = 'm';
    size_t n = 10;

	printf("CADENA: %p\n", s);
	j = ft_memchr(s, c, n);
	printf("LETRA: %p", j);
	return (0);
} */
