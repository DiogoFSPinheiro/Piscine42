/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:44:37 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/07 17:44:40 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;
	int	c;

	fat = 1;
	c = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb >= c)
	{
		fat *= c;
		c++; 
	}
	return (fat);
}
/*
int main()
{
	#include <stdio.h>
	printf("%d", ft_iterative_factorial(0));
}
*/
