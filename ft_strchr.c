/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:59:18 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/13 17:39:15 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		ch;
	int			i;

	ch = c;
	i = 0;
	while (s[i] != ch)
	{
		if (s[i] == 0)
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}
/*
int main (void)
{z
	char 	str[] = "esto es super increible";
	char	a = 'h';
	char	*b;
	int		i;

	b = ft_strchr(str, a);
	i = 0;
	if (b != NULL)
	{
		while(b[i] != '\0')
		{
			write(1, &b[i], 1);
			i++;
		}
	}
	else
		write(1, "NULL", 4);
}
*/