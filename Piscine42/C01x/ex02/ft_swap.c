/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:50:19 by diogosan          #+#    #+#             */
/*   Updated: 2023/08/30 18:50:44 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	*pc;
	int	c;

	pc = &c;
	*pc = *a;
	*a = *b;
	*b = *pc;
}
/*int	main(void)
{
	int	*pa;
	int	*pb;
	int	a;
	int	b;

	a = 2;
	b = 4;

	pa = &a;
	pb = &b;

	printf("%d", a);
	printf("%d\n", b);
	ft_swap(pa ,pb );
	printf("%d", a);
    printf("%d", b);
}

*/
