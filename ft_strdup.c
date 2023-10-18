/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:01:00 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/03 17:25:54 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = malloc(sizeof(char) * ft_strlen(s1)+1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, ft_strlen(s1)+1);
	return (s2);
}
/* int main (void)
{
	char	*str1 = "Iratxe";
	char	*str2;
	char	*str3;

	str2 = ft_strdup(str1);
	ft_putendl_fd(str2, 1);
	str3 = strdup (str1);
	ft_putendl_fd(str3, 1);
} */