/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:56:06 by diogosan          #+#    #+#             */
/*   Updated: 2023/08/31 19:25:53 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	holder;
	int	ciclo;

	ciclo = size -1;
	c = 0;
	while (ciclo > c)
	{
		holder = tab[ciclo];
		tab[ciclo] = tab[c];
		tab[c] = holder;
		c++;
		ciclo--;
	}
}
/*
int	main()
{
	int    tab[] = {1, 2, 3, 4, 5};
	int    size = 5;
	int    c;


	c = 0;
	while (c <= size-1)
	{
		printf("%d", tab[c]);
		c++;
	}

	ft_rev_int_tab( tab, size);

	c = 0;
	while (c <= size-1)
	{
		printf("%d", tab[c]);
		c++;
	}
}
*/
