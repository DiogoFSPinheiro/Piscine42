/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:11:49 by diogosan          #+#    #+#             */
/*   Updated: 2023/08/31 11:12:09 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	resto;

	result = *a / *b;
	resto = *a % *b;
	*a = result;
	*b = resto;
}
/*
int main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 15;
	b = 2;
	pa = &a;
	pb = &b;

	printf("%d\n", a);
        printf("%d\n", b);

	ft_ultimate_div_mod( pa, pb);

	printf("%d\n", a);
	printf("%d", b);
}
*/
