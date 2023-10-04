/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:10:02 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/05 13:10:04 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sinal(char *str, int *ci)
{
	int	p;
	int	c;

	p = 1;
	c = 0;
	while (str[c] == 32 || (str[c] >= 9 && str[c] <= 13))
		c++;
	while (str[c] && (str[c] == '-' || str[c] == '+'))
	{
		if (str[c] == '-')
			p *= -1;
		c++;
	}
	*ci = c;
	return (p);
}

int	ft_atoi(char *str)
{
	int	number;
	int	sinal;
	int	c;

	number = 0;
	sinal = ft_sinal(str, &c);
	while (str[c] && str[c] >= '0' && str[c] <= '9')
	{
		number *= 10;
		number += str[c] - '0';
		c++;
	}
	number *= sinal;
	return (number);
}
/*
int	main()
{
	char *number = "--asci++42";
	char *number1 = "-4\n2";
	char *number2 = "  ---5642";

	printf("%d\n",ft_atoi(number));
	printf("%d\n",ft_atoi(number1));
	printf("%d\n",ft_atoi(number2));
}
*/
