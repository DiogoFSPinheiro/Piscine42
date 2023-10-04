/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:26:58 by diogosan          #+#    #+#             */
/*   Updated: 2023/08/31 11:09:14 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;
	int	resto;

	result = a / b;
	resto = a % b;
	*div = result;
	*mod = resto;
}
/*
int main(void)
{
	int	a;
	int	b;
	int	result;
	int	resto;
	int	*div;
	int	*mod;

	a = 15;
	b = 2;
	result = 0;
	resto = 0;
	div = &result;
	mod = &resto;

	ft_div_mod( a, b, div, mod);

	printf("%d\n", result);
	printf("%.1d", resto);
}
*/