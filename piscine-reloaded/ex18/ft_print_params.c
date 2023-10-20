/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:08:37 by agenow            #+#    #+#             */
/*   Updated: 2023/10/20 18:15:53 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
