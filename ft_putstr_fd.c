/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:59:44 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/16 19:42:50 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/* int	main(int argc,char **argv)
{
	int fd= open(argv[1],O_WRONLY | O_CREAT | O_TRUNC , 0777);
	printf("fd = %i\n",fd);
	ft_putstr_fd("hola que tal?",fd);
} */
