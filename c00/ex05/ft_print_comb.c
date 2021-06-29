/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:29:56 by aomman            #+#    #+#             */
/*   Updated: 2021/06/28 15:27:42 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48 ;
	while (++a <= 55)
	{
		b = a + 1;
		while (++b <= 56)
		{
			c = b + 1;
			while (++c <= 57)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 55 || b != 56 || c != 57)
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
			}
		}
	}
}
