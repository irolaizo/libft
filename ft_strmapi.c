/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:20:04 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/11 19:31:52 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*s3;

	i = 0;
	if (!s)
		return (NULL);
	s3 = (char *)malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!s3)
		return (NULL);
	while (s[i])
	{
		s3[i] = f(i, s[i]);
		i++;
	}
	s3[i] = '\0';
	return (s3);
}

/* char	ft_fuction(unsigned int i, char j)
{
	i = 0;
	return (ft_toupper(j));
}
int main (void)
{
	char	*str;

	str = "hola que tal?";
	printf("original: %s\n", str);
	printf("Mapeada: %s\n", ft_strmapi(str, ft_fuction));
} */