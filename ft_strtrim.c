/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:39:27 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/18 19:15:24 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strtrim_beggining(char const *s1, char const *set)
{
	int		i;
	char	*s2;

	s2 = (char *)s1;
	i = 0;
	while (s2[i] && ft_strchr(set, s2[i]) != NULL)
		i++;
	return (i);
}

static int	ft_strtrim_ending(char const *s1, char const *set)
{
	int		i;
	char	*s2;

	s2 = (char *)s1;
	i = ft_strlen(s2) - 1;
	if (i < 0)
		i = 0;
	while (s2[i] && ft_strchr(set, s2[i]) != NULL)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = ft_strtrim_beggining(s1, set);
	end = ft_strtrim_ending(s1, set);
	s2 = ft_substr(s1, start, (end - start + 1));
	return (s2);
}

/*int main (void)
{
	char	*s1;
	char	*set;

	s1 = "Hola mundo holaho";
	set = "hoH";
	printf("la cadena cortada es: %s\n", ft_strtrim(s1, set));
}*/
