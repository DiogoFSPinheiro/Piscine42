/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:00:13 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/07 18:00:15 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fat;

	fat = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
	{
		fat = ft_recursive_factorial(nb - 1);
		nb = fat * nb;
		return (nb);
	}
}
/*
int main()
{
	#include <stdio.h>
	printf("%d",ft_recursive_factorial(0));
}
*/
