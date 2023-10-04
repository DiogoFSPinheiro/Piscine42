/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:52:58 by diogosan          #+#    #+#             */
/*   Updated: 2023/09/12 10:53:00 by diogosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	c;
	int	*range;

	if (min >= max)
		return (0);
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (0);
	c = 0;
	while (c < (max - min))
	{
		range[c] = min + c;
		c++;
	}
	return (range);
}
/*
int	main(int t, char **v)
{
	int	c;
	int	min = atoi(v[1]);
	int	max = atoi(v[2]);
	int	*range;
	
	t = 0;
		
	#include <stdio.h>
	range = ft_range( min, max);
	
	c = 0;
	while (c < (max - min))
	{
		printf("%d ,", range[c]);
		c++;
	}
	
}
*/
