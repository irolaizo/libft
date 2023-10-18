/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:51:10 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/02 16:45:14 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	int		i;
	void	*d;

	d = dst;
	if ((char *)dst == 0 && (char *)src == 0)
		return ((char *)0);
	if (dst < src)
	{
		i = 0;
		while (i < (int)len)
		{
			(((char *)dst)[i] = ((char *)src)[i]);
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (d);
}

/* int	main(void)
{
	char	src[30] = "Hello World!";
	//char	dst [20];

	ft_memmove(src, src + 5, 13);
	printf("Source: %s\n", src);
	//printf("Destination: %s\n", dst);
	return (0);
} */
