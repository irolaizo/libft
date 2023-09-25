/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:54:00 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/22 14:44:02 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
	if (ft_isalpha('a'))
	{
		printf("El resultado es caracter\n");
	}
	else
	{
		printf("No es caracter\n");
	}
	return(0);
}
*/