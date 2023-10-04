/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:08:36 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/12 11:08:38 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = (int *)malloc((max - min) * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	c = 0;
	while (c < (max - min))
	{
		buffer[c] = min + c;
		c++;
	}
	return (max - min);
}
/*
int	main(int t, char **v)
{
	int	c;
	int	min = atoi(v[1]);
	int	max = atoi(v[2]);
	int	*range;
	int	size;
	
	t = 0;
	#include <stdio.h>
	
	size = ft_ultimate_range(&range, min, max);
	
	c = 0;
	printf("%d\n", size);
	while (c < size)
	{
		printf("%d ", range[c]);
		c++;
	}
	
}
*/
