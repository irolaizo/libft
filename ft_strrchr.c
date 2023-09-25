/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:37:07 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/25 16:26:46 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	char		*last;
	int			i;

	ch = c;
	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (last);
}

/* int main (void)
{
	char 	str[] = "esto is es super increible";
	char	a = 'i';
	char	*b;
	int		i;

	b = ft_strrchr(str, a);
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

//STRRCHR ->AMIGO MIO COMO ESTAS -> AS
//STRCHR -> AMIGO MIO COMO ESTAS -> AMIGO MIO COMO ESTAS