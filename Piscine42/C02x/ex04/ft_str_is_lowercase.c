/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:14:49 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 14:15:07 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 97 || str[c] > 122)
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
	char str[] = "pequenino";
	char err[] = "ola  pepS";
	output = ft_str_is_lowercase( str);
	printf("%d\n%d", output ,ft_str_is_lowercase( err));
	
	
	
}
*/
