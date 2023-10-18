/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:55:22 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/30 13:08:01 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((n > i) && (s2[i] || s1[i]))
	{
		if ((s1[i] != s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int main (void)
{
	int j;
	const char *s1 = "Hola";
	const char *s2 = "Hñlb";
	size_t n = 2;

	j = 0;

	j = ft_strncmp(s1, s2, n);
	int i=0;
	i=strncmp(s1,s2,n);
	printf("ft_ = %d\n",j);
	printf("original = %d\n",i);
}
*/