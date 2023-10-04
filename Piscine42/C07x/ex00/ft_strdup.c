/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:46:24 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/09 16:46:26 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	len(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	int		c;
	char	*dest;

	dest = (char *)malloc(len(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	c = 0;
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(int t, char **v)
{
	char	*show;
	int	c;
	char	*str = v[1];
	
	t = 0; 
	
	show = ft_strdup(str);
	c = 0;
	while (show[c])
	{
		write (1, &show[c],1);
		c++;
	}
}
*/
