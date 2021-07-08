/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:22:35 by aomman            #+#    #+#             */
/*   Updated: 2021/07/08 15:38:34 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	if (argc > 1)
	{
		while (i >= 1)
		{
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			j = 0;
			write(1, "\n", 1);
			i--;
		}
	}
}
