/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:01:36 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/30 17:20:06 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* 
int main (void)
{
    char  j;

    //j = ft_strlen("qqqqqqqqqqq");
	j = 48;
    write (1, &j, 1);
	
}
 */
