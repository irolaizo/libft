/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:40:43 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/02 17:49:19 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = "0123456789";
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr_fd (n / 10, fd);
	write(fd, &s[n % 10], 1);
}
/* int main()
{
	int fd=1;
	//-2147483648 a 2147483647
	int n =-2147483645;
	ft_putnbr(n,fd);
} */