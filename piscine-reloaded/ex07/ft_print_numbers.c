/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:51:42 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 15:03:20 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}
*/
