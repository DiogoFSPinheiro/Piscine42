/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:13:33 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/07 19:13:35 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pot;
	int	c;

	pot = 1;
	if (power >= 1)
	{
		c = ft_recursive_power(nb, power - 1);
		pot = c * nb;
		return (pot);
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (pot);
}
/*
int main()
{
	#include <stdio.h>
	printf("%d\n", ft_recursive_power(5, 3)); // 125
	printf("%d\n", ft_recursive_power(0, 0)); // 1
	printf("%d\n", ft_recursive_power(5, 1)); // 5
	printf("%d\n", ft_recursive_power(5, -1));// 0
	
}
*/
