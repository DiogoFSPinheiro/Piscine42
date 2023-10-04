/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:15:08 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 15:15:10 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] >= 97 && str[c] <= 122)
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
/*

int main()
{
	char str[] = "ol25145a";

	printf("%s\n", str);
	printf("%s", ft_strupcase(str));
	
	
	
}
*/
