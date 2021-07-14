/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:36:48 by aomman            #+#    #+#             */
/*   Updated: 2021/07/13 16:47:31 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
//#include<stdio.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main()
{
	int	*x;
	int	i;

	x = ft_range(1, 10);
	i = 0;
	while (i < 9)
	{
		printf("%d", x[i]);
		i++;
	}
}
*/
