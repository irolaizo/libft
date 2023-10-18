/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:30:52 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/03 18:34:44 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || ft_strlen(s) == 0 || ft_strlen(s) <= start)
		return (ft_strdup(""));
	i = 0;
	if (ft_strlen(s) - start > len)
		i = len + 1;
	else
		i = ft_strlen(s) - start + 1;
	substr = ft_calloc(sizeof(char), i);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, i);
	return (substr);
}
/* int main (void)
{
	char	*s;
	char	*h;

	s = "iratxe olaizola";
	h = ft_substr(s, 3, 8);
	ft_putstr_fd(h, 1);
} */