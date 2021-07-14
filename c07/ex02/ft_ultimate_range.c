/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:44:44 by aomman            #+#    #+#             */
/*   Updated: 2021/07/13 20:46:20 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
//#include<stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = malloc(sizeof(int) * (max - min));
		if (*range == NULL)
			return (-1);
		while (max > min)
		{	
			range[0][i] = min;
			i++;
			min++;
		}
		return (i);
	}
}
/*
int	main(void)
{
	int	i;
	int	f;
	int	*t;

	f = ft_ultimate_range(&t, 1, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d", t[i]);
		i++;
	}
}
*/
