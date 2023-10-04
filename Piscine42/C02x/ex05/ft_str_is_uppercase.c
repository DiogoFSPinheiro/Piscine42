/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:14 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 14:36:32 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 65 || str[c] > 90)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*

int main()
{
	int	output;
	char str[] = "OLA";
	char err[] = "ola  pepS";
	char not[] = "";
	output = ft_str_is_uppercase( str);
	printf("%d\n%d", output ,ft_str_is_uppercase( err));
	
	
	
}
*/
