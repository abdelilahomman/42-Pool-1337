/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:50:14 by aomman            #+#    #+#             */
/*   Updated: 2021/07/12 12:13:00 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

#include<stdio.h>
int	main()
{
	printf("%d", ft_iterative_power(4,4));
}
