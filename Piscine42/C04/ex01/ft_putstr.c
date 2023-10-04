/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:39:51 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/05 12:39:54 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		write(1, &str[c], 1);
		c++;
	}
}
/*
int	main()
{
	char	*str = "gajas muito";
	char	*str1 = "boas";
	
	ft_putstr(str);
	write(1," ", 1);
	ft_putstr(str1);
}
*/
