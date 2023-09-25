/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:46:40 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/24 16:50:03 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
//#include <stdio.h>
int main (void)
{
	if (ft_isdigit('3'))
	{
		printf("El resultado es númerico\n");
	}
	else
	{
		printf("No es númerico\n");
	}
	return(0);
}
*/