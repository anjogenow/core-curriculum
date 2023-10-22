/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:55:43 by agenow            #+#    #+#             */
/*   Updated: 2023/10/22 19:13:17 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	(void) c;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	void	(*f)(int) = ft_putnbr;
	int		tab[] = {1, 2, 3};

	ft_foreach(tab, 3, f);
}
*/
