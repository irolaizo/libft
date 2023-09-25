/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:02:02 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/22 14:46:47 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*s;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (b);
}

/*
//#include <stdio.h>

int main (void)
{
    char str[10] = "abcde";
    ft_memset(str + 1, '*', 2*(sizeof(char)));
	printf("%s\n", str);
}
*/
