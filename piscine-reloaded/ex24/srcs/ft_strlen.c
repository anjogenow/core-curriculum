/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:42:34 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 17:50:12 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[i++])
		continue ;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s : %d\n", "Hello World!", ft_strlen("Hello World!"));
	printf("%s : %d\n", "!", ft_strlen("!"));
	printf("%s : %d\n", "", ft_strlen(""));
	printf("%s : %d\n", " ", ft_strlen(" "));
}
*/
