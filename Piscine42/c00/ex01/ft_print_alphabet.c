/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:31:10 by diogosan          #+#    #+#             */
/*   Updated: 2023/08/29 18:47:32 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	t;

	t = 'a';
	while (t <= 'z')
	{
		write(1, &t, 1);
		t++;
	}
}
//int main(void){
//
//	ft_print_alphabet();
//}
