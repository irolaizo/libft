/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:09:02 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/03 16:56:28 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = malloc(count * size);
	if (!str)
		return (NULL);
	return (ft_memset(str, 0, (count * size)));
}
/* int main(void)
{
	char	*msn1;
	char	*msn2;

	msn1 = ft_calloc(4, sizeof(char));
	msn1 = "Hola";
	ft_putendl_fd(msn1, 1);
	msn2 = calloc(4, sizeof(char));
	msn2 = "Hola";
	ft_putendl_fd(msn2, 1);
} */