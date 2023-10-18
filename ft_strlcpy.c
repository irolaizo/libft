/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:28:39 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/26 11:25:40 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && dstsize - 1 > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main (void)
{
	char src[10] = "HOLA";
	char dst[10] = "IRATXE";
	char dst2[10] = "IRATXE";

	printf("Retorna: %zu\nSRC: %s\nDST: %s\n\n", ft_strlcpy(dst, src, 2), src, dst);
	printf("Retorna: %zu\nSRC: %s\nDST: %s", strlcpy(dst2, src, 2), src, dst2);
	write(1, &z, 1);
}
*/