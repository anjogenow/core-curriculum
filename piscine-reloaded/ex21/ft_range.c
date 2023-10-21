/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:05:44 by agenow            #+#    #+#             */
/*   Updated: 2023/10/21 16:23:46 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	(void) range;
	if (min >= max)
		return (NULL);
	range = (int *) malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 13 - -5)
	{
		printf("%d : %d\n", i, ft_range(-5, 13)[i]);
		i++;
	}
}
*/
