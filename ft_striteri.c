/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:50:55 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/11 17:19:29 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_function(unsigned int i, char *s)
{
	*s = i % 2 + '0';
}

int	main(void)
{
	char	*j;
	j = ft_strdup("Hola buenas tardes");
	printf("%s\n", j);
	ft_striteri(j, ft_function);
	printf("%s\n", j);

	free(j);
	return (0);
} */
