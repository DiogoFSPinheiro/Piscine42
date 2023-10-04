/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:39:36 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/07 19:39:38 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0 || nb > 2147395600)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main()
{
	#include <stdio.h>
	printf("%d\n", ft_sqrt(2147395599));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(30));
}
*/
