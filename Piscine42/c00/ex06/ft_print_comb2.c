/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:31:10 by diogosan          #+#    #+#             */
/*   Updated: 2023/08/29 09:31:14 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_escrever( char n1, char n2, char n3, char n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
	{
	}
	else
		write(1, ", ", 2);
}

void	ft_ultimos(char n1, char n2, char n3, char n4)
{
	while (n3 <= '9')
	{
		n4 = '1';
		while (n4 <= '9')
		{
			ft_escrever(n1, n2, n3, n4);
			n4++;
		}
		n3++;
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '8')
		{
			n3 = '0';
			ft_ultimos(n1, n2, n3, n4);
			n2++;
		}
		n1++;
	}
}
//int main(void){
//
//	ft_print_comb2();
//
//}