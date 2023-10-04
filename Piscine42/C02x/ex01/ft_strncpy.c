/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:32:59 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/01 12:34:36 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (n > c)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
int	main()
{
	char	src[]="fck arround"; // 11 chars
	char	dest[22];
	int	n;

	n = 18;
	ft_strncpy(dest, src, n);
	printf("%s\n", src);
	printf("%s", dest);
}
*/
