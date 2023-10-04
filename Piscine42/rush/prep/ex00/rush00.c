/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:36:13 by tialbert          #+#    #+#             */
/*   Updated: 2023/08/27 15:09:25 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	write_line(int i, int x, char c, char d);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			i = 1;
			if (j == 1 || j == y)
				write_line(i, x, 'o', '-');
			else
				write_line(i, x, '|', ' ');
			ft_putchar('\n');
			j++;
		}
	}
	else
		write(1, "Please input values bigger than 0.", 34);
	return ;
}

void	write_line(int i, int x, char c, char d)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar(c);
		else
			ft_putchar(d);
		i++;
	}
}
