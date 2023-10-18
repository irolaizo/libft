/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:13:59 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/18 19:16:45 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnotnegative(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_getlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i_leng;

	i_leng = ft_getlen(n);
	str = malloc(sizeof(char) * i_leng + 1);
	if (!str)
		return (NULL);
	str[i_leng] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		i_leng --;
		str[i_leng] = ft_isnotnegative(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

/* int main (void)
{
	int	s;
	s = 200;
	printf("Este es mi resultado: %s\n", ft_itoa (s));
} */