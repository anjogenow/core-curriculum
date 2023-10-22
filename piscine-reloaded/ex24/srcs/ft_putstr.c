/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:34:56 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 17:40:21 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str++)
		ft_putchar(*(str - 1));
}
/*
int	main(void)
{
	ft_putstr("Hello World!");
	ft_putchar('\n');
	ft_putstr("");
	ft_putchar('\n');
	ft_putstr(" ");
	ft_putchar('\n');
}

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
