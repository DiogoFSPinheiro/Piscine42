/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:48:22 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/07 19:48:25 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	#include <stdio.h>
	printf("%d\n",ft_is_prime(7));//1
	printf("%d\n",ft_is_prime(21));//0
	printf("%d\n",ft_is_prime(2000000001));//0
	printf("%d\n",ft_is_prime(10));//0
}
*/
