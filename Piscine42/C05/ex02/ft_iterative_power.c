/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:13:17 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/07 18:13:30 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	pot;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	c = 1;
	pot = 1;
	while (power >= c)
	{
		pot = pot * nb;
		c++;
	}
	return (pot);
}
/*
int main()
{
	#include <stdio.h>
	printf("%d\n", ft_iterative_power(5, 3)); // 125
	printf("%d\n", ft_iterative_power(0, 0)); // 1
	printf("%d\n", ft_iterative_power(5, 0)); // 1
	printf("%d\n", ft_iterative_power(5, -1));// 0
	
}
*/
