/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:53:31 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/05 12:53:35 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else
		ft_putchar(nb + 48);
}
/*
int	main()
{
	int nb = -2147483648;
	int nb1 = 9;
	int nb2 = -27;
	int nb3 = 5220;
	
	ft_putnbr(nb);
	write(1, "\n",1);
	ft_putnbr(nb1);
	write(1, "\n",1);
	ft_putnbr(nb2);
	write(1, "\n",1);
	ft_putnbr(nb3);
	
}
*/
