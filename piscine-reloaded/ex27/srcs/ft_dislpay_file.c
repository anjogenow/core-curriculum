/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dislpay_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:39:34 by agenow            #+#    #+#             */
/*   Updated: 2023/10/23 12:15:49 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> // file control options

void	ft_puterr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(2, str, i);
}

char	*argument_handler(int ac, char **av)
{
	if (ac == 1)
	{
		ft_puterr("File name missing.\n");
		return (NULL);
	}
	else if (ac > 2)
	{
		ft_puterr("Too many arguments.\n");
		return (NULL);
	}
	return (av[1]);
}

int	main(int ac, char **av)
{
	char	*filename;
	int		fd;
	char	c;

	(void) fd;
	(void) c;
	filename = argument_handler(ac, av);
	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_puterr("File not found.\n");
		return (-1);
	}
	while (read(fd, &c, sizeof(c)) > 0)
		write(1, &c, 1);
	close(fd);
	return (0);
}
