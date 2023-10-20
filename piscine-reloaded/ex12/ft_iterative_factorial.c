/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:32:02 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 15:41:28 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
		tmp *= nb--;
	return (tmp);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d! : %d\n", -1, ft_iterative_factorial(-1));
	printf("%d!  : %d\n", 0, ft_iterative_factorial(0));
	printf("%d!  : %d\n", 1, ft_iterative_factorial(1));
	printf("%d!  : %d\n", 2, ft_iterative_factorial(2));
	printf("%d!  : %d\n", 3, ft_iterative_factorial(3));
	printf("%d!  : %d\n", 4, ft_iterative_factorial(4));
	printf("%d!  : %d\n", 5, ft_iterative_factorial(5));
	printf("%d!  : %d\n", 6, ft_iterative_factorial(6));
	printf("%d!  : %d\n", 7, ft_iterative_factorial(7));
	printf("%d!  : %d\n", 8, ft_iterative_factorial(8));
	printf("%d!  : %d\n", 9, ft_iterative_factorial(9));
	printf("%d! : %d\n", 10, ft_iterative_factorial(10));
	printf("%d! : %d\n", 11, ft_iterative_factorial(11));
	printf("%d! : %d\n", 12, ft_iterative_factorial(12));
	printf("%d! : %d\n", 13, ft_iterative_factorial(13));
}
*/
