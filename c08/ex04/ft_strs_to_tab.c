/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:08:43 by aomman            #+#    #+#             */
/*   Updated: 2021/07/15 15:19:40 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"
#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*t;
	int		len;
	int		i;

	len = ft_strlen(src);
	t = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (src[i] != '\0')
	{
		t[i] = src [i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	i = 0;
	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == 0)
		return (0);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}
/*
int main()
{
	char *tab[] = {"ayoub","adam","fouadzaml"};
	t_stock_str *s;
	s = ft_strs_to_tab(3, tab);
	int i = 0;
	while (i < 3)
	{
		printf("%i\n",s[i].size);
		printf("%s\n",s[i].str);
		printf("%s\n",s[i].copy);
		i++;
	}
	return(0);
}*/
