/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:14:51 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/09 11:14:54 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escreve(int c, char **str)
{
	int	i;
	int	j;

	j = 1;
	while (j < c)
	{
		i = 0;
		while (str[j][i])
		{
			write(1, &str[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int c, char **str)
{
	int		i;
	int		j;
	char	*holder;	

	j = 1;
	while (j < c - 1)
	{
		i = j + 1;
		while (i < c)
		{
			if (ft_strcmp(str[j], str[i]) > 0)
			{
				holder = str[j];
				str[j] = str[i];
				str[i] = holder;
			}
			i++;
		}
		j++;
	}
	escreve(c, str);
}
