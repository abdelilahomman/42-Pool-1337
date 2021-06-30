/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:29:27 by aomman            #+#    #+#             */
/*   Updated: 2021/06/30 17:20:18 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i <= size)
	{
		c = tab[i];
		tab[i] = tab [size];
		tab[size] = c;
		i++;
		size--;
	}
}
