/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:26:14 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/19 13:36:45 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c < 127))
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
   int   c;

   c = 'A';
   if (ft_isprint(c))
   {
      printf ("El resultado es un caracter imprimible\n");
   }
   else
   {
      printf ("El resultado no es un caracter imprimible\n");
   }
   return(0);
 }
 */