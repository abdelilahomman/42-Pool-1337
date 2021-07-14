/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:37:58 by aomman            #+#    #+#             */
/*   Updated: 2021/07/13 16:34:04 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
//#include<stdio.h>
char	*ft_strdup(char	*src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i] != '\0')
		i++;
	s = malloc(i + 1);
	s[i] = 0;
	while (i >= 0)
	{
		s[i] = src[i];
		i--;
	}
	return (s);
}
/*
int	main(void)
{
	char	*a;

	a = ft_strdup("abde");
	printf("%s", a);
}*/
