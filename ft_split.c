/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:57:15 by irolaizo          #+#    #+#             */
/*   Updated: 2023/10/18 19:16:01 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *str, char c)
{
	int	i;
	int	count_words;

	i = 0;
	count_words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count_words++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count_words);
}

static void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free (str);
}

static int	ft_fillwords(char const *str, char c, char **matrix)
{
	int	matrix_index;
	int	start;
	int	end;

	matrix_index = 0;
	end = 0;
	while (ft_countwords(str, c) > matrix_index)
	{
		start = end;
		while (str[start] == c)
			start++;
		end = start;
		while (str[end] != c && str[end] != '\0')
			end++;
		matrix[matrix_index] = ft_substr(str, start, (end - start));
		if (!matrix[matrix_index])
		{
			ft_free(matrix);
			return (0);
		}
		matrix_index++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;

	if (!s)
		return (NULL);
	matrix = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!matrix)
		return (NULL);
	matrix[ft_countwords(s, c)] = NULL;
	if (ft_fillwords(s, c, matrix) == 0)
		return (NULL);
	return (matrix);
}

/* int	main(void)
{
	char **matrix;
	int i = -1;
	matrix = ft_split("   HOLA    COMO    ESTAS   ", ' ');
	while (++i <= ft_countwords("   HOLA    COMO    ESTAS   ", ' '))
		printf("Matrix[%i]: %s\n", i, matrix[i]);
	return (1);
} */
