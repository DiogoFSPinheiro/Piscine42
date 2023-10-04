/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:51:43 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/02 15:51:47 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] >= 65 && str[c] <= 90)
			str[c] = str[c] + 32;
		c++;
	}
	c = 0;
	while (str[c])
	{
		if (c == 0 || (str[c - 1] >= 32 && str[c - 1] <= 47) 
			|| (str[c - 1] >= 58 && str[c - 1] <= 64)
			|| (str[c - 1] >= 91 && str[c - 1] <= 96)
			|| (str[c - 1] >= 123))
		{
			if (str[c] >= 97 && str[c] <= 122)
				str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
/*

int main()
{
	char str[] = "ola, tudo bem? 42PALAVRAS q[uare*nta-e-duas; cinquenta+e+um";

	printf("%s\n", str);
	printf("%s",  ft_strcapitalize(str));
	
	
	
}
*/
