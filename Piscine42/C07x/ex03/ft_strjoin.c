/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:34:07 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/12 11:34:09 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_str;
	int		c;
	char	*join;

	len_str = len(sep) * (size -1);
	c = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (c < size)
	{
		len_str += len(strs[c]);
		c++;
	}
	join = (char *)malloc(len_str * sizeof(char) + 1);
	if (!join)
		return (0);
	ft_strcpy(join, strs[0]);
	c = 1;
	while (c < size)
	{
		ft_strcat(join, sep);
		ft_strcat(join, strs[c]);
		c++;
	}
	return (join);
}
/*
int	main()
{
	char	**strs;
	char	*sep = " ";
	
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	
	#include <stdio.h>
	
	printf("%s\n", ft_strjoin( 3, strs, sep));
}
*/
