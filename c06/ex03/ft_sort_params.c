/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:42:39 by aomman            #+#    #+#             */
/*   Updated: 2021/07/08 18:22:49 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			j = 0;
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
	int	i;
	char *tmp;

	i = 1;
	while (i < argc - 1)
	{
		if(ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	ft_print(argc, argv);
}
