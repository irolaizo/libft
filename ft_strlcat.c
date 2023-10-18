/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:53:19 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/02 17:24:59 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (dst[j] != '\0')
		j++;
	if (dstsize <= j)
		return (dstsize + i);
	if (dstsize > 0)
	{
		while (src[k] != '\0' && k < dstsize - j - 1)
		{
			dst [j + k] = src[k];
			k++;
		}
	}
	dst [j + k] = '\0';
	return (j + i);
}
//int main (void)
//{
	//char src[30] = "HOLA";
	//char dst[30] = "IRATXE";
	//char dst2[20] = "IRATXE";

	//printf("%zu\nSRC: %s\nDST: %s\n\n", ft_strlcat(dst, src, 2), src, dst);
	//printf("%zu\nSRC: %s\nDST: %s\n", strlcat(dst2, src, 2), src, dst2);

	//write(1, &z, 1);
//}
