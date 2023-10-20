/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:06:09 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 15:09:23 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
/*
int	main(void)
{
	ft_is_negative(-5);	
	ft_is_negative(0);
	return (0);
}

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}
*/
