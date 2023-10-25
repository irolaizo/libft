/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:22:35 by irolaizo          #+#    #+#             */
/*   Updated: 2023/09/19 13:23:34 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//THE OBJECTIVE OF THIS IS TO FILL OF NULLS THE POINTER *S
void	ft_bzero(void *s, size_t len)
{
	//WE NEED TO CAST THE VOID *S BECAUSE WE CAN'T OPERATE ON A VOID *
    char	*pointer;

    //TO CAST IT, WE CREATE A CHAR POINTER AND DO THAT (CHAR *)S
	pointer = (char *)s;
	while (len--)
    {
        *pointer++ = 0;
    }	
}

int main (void)
{
    char    *iratxe;
    iratxe = (char *)malloc(sizeof(char)) * (6 + 1);
    if (!iratxe)
        return(0);
    //printf("%s\n", iratxe);
    ft_bzero(iratxe);
    printf("%s\n", iratxe);
}


