/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:13:00 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 15:19:42 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
# include <stdio.h>
int	main(void)
{
	int a;
	int	b;

	a = 2;
	b = 3;
	printf("%d, %d\n", a, b);	
	ft_swap(&a, &b);
	printf("%d, %d\n", a, b);	
	return (0);
	printf("%d, %d", a, b);	
}*/
