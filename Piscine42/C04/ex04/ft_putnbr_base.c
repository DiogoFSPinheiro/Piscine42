/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:12:28 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/06 11:13:06 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_lenstr(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

int	check_erro(char *base)
{
	int	c;

	if (ft_lenstr(base) <= 1)
		return (0);
	c = 0;
	while (base[c] != '\n')
	{
		if (base[c] == base[c + 1])
			return (0);
		else if (base[c] == '+' || base[c] == '-')
			return (0);
		c++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	len;

	len = ft_lenstr(base);
	if (check_erro(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < len)
			ft_putchar(base[nb]);
			
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

int	main()
{
	int nb = -5;
	char *base = "01";
	int nb1 = 220201996;
	char *base1 = "0123456789";
	int nb2 = -999;
	char *base2 = "poneyvif";
	int nb3 = 10;
	char *base3 = "0123456789ABCDEF";
	
	ft_putnbr_base(nb, base);
	write(1, "\n",1);
	ft_putnbr_base(nb1, base1);
	write(1, "\n",1);
	ft_putnbr_base(nb2, base2);
	write(1, "\n",1);
	ft_putnbr_base(nb3, base3);	
}

