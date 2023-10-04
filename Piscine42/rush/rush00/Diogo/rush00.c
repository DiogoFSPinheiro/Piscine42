/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 08:13:53 by tialbert          #+#    #+#             */
/*   Updated: 2023/08/26 15:29:00 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_putchar.h"

void	rush(int y, int x);

void	rush(int y, int x)
{
	int	cx;
	int	cy;

	cx = 1;
	while (cx <= x)
	{
		cy = 1;
		while (cy <= y)
		{
			if (cx == 1 && cy == 1 || cx == x && cy == 1)
				ft_putchar('o');
			else if (cx == 1 && cy == y || cx == x && cy == y)
				ft_putchar('o');
			else if (cx == 1 && cy < y || cx == x && cy < y)
				ft_putchar('-');
			else if (cx > 1 && cy == 1 || cx > 1 && cy == y)
				ft_putchar('|');
			else
				ft_putchar(' ');
			cy++;
		}
		cx++;
		ft_putchar('\n');
	}
}

