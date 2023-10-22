/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:04:19 by agenow            #+#    #+#             */
/*   Updated: 2023/10/22 18:11:22 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_point
{
	int	x;
	int	y;
};

typedef struct s_point	t_point;
/*
#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point) {
  point->x = 42;
  point->y = 21;
}
int main(void) {
  t_point   point;

  set_point(&point);
  printf("%d, %d", point.x, point.y);
return (0); }
*/
