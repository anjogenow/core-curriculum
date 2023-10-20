/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:00:19 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 17:06:39 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d! : %d\n", -1, ft_recursive_factorial(-1));
	printf("%d!  : %d\n", 0, ft_recursive_factorial(0));
	printf("%d!  : %d\n", 1, ft_recursive_factorial(1));
	printf("%d!  : %d\n", 2, ft_recursive_factorial(2));
	printf("%d!  : %d\n", 3, ft_recursive_factorial(3));
	printf("%d! : %d\n", 12, ft_recursive_factorial(12));
	printf("%d! : %d\n", 13, ft_recursive_factorial(13));
}
*/
