/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:15:29 by agenow            #+#    #+#             */
/*   Updated: 2023/10/22 19:23:05 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
		if (f(tab[i++]) == 1)
			count++;
	return (count);
}
/*
#include <stdio.h>

int	first_letter_a(char *str)
{
	if (*str == 'a' || *str == 'A')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	(void) ac;
	av++;
	printf("%d", ft_count_if(av, &first_letter_a));
}
*/
