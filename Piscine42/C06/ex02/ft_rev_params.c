/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:11:34 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/09 11:11:37 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escreve(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int	main(int c, char **str)
{
	int	i;

	i = c - 1;
	while (i != 0)
	{
		escreve(str[i]);
		i--;
	}
}
