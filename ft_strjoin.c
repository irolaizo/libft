/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:38:18 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/09 17:51:02 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		h;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	s3 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s3)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	h = 0;
	while (s2[h])
	{
		s3[i + h] = s2[h];
		h++;
	}
	s3[i + h] = '\0';
	return (s3);
}
/*  int main(void)
{
	char *s1="hola";
	char *s2=NULL;

	char *s3=ft_strjoin(s1,s2);
	printf("FT_ s3 = %s\n",s3);
	
} */