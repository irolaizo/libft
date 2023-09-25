/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:48:44 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/18 18:49:36 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c < 0) || (c > 127))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*
//#include <stdio.h>
int main(void)
{
    if (ft_isascii (40))
    {
        printf("El resultado es ASCCII\n");
	}
	else
	{
		printf("No es ASCII\n");
	}
	return(0);
}
*/