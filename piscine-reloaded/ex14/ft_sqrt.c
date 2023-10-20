/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:08:30 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 17:32:21 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (nb > 0 && i < 46340 && i * i <= nb)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%d : %d\n", -1, ft_sqrt(-1));
	printf("%d : %d\n", 0, ft_sqrt(0));
	printf("%d : %d\n", 1, ft_sqrt(1));
	printf("%d : %d\n", 2, ft_sqrt(2));
	printf("%d : %d\n", 81, ft_sqrt(81));
	printf("%d : %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("%d : %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("%d : %d\n", 2147395600, ft_sqrt(2147395600));
}
*/
