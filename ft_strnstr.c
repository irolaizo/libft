/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:43:53 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/04 16:44:55 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ha;
	char	*ne;
	size_t	i;
	size_t	n;

	ha = (char *) haystack;
	ne = (char *) needle;
	i = 0;
	if (!ne[i])
		return (ha);
	while (i < len && ha[i] != '\0')
	{
		n = ft_strncmp(&ha[i], ne, ft_strlen(ne));
		if (n == 0 && (i + ft_strlen(ne) <= len))
			return (&ha[i]);
		i++;
	}
	return (NULL);
}

/* int	main()
{
	char	*h = "lorem ipsum dolor sit amet";
	char	*n = "dolor";
	size_t	l = 5;

	printf("%s\n", strnstr(h + 12, n, l));
	printf("%s\n", ft_strnstr(h + 12, n, l));
} */
