/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:38 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 18:06:51 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1;
	char *s2;

	s1 = "";
	s2 = "";
	printf("%s - %s = %d\n", s1, s2, ft_strcmp(s1, s2));
	s1 = "";
	s2 = "0";
	printf("%s - %s = %d\n", s1, s2, ft_strcmp(s1, s2));
	s1 = "0";
	s2 = "";
	printf("%s - %s = %d\n", s1, s2, ft_strcmp(s1, s2));
	s1 = "Hello World0";
	s2 = "Hello World";
	printf("%s - %s = %d\n", s1, s2, ft_strcmp(s1, s2));
}
*/
