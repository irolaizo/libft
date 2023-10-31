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

void	ft_bzero(void *s, size_t len)
{
    char	*pointer;

	pointer = (char *)s;
	while (len--)
    {
        *pointer++ = 0;
    }	
}

/* int main (void)
{
    char    *iratxe;
    iratxe = (char *)malloc(sizeof(char)) * (6 + 1);
    if (!iratxe)
        return(0);
    //printf("%s\n", iratxe);
    ft_bzero(iratxe);
    printf("%s\n", iratxe);
}
 */

