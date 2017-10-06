/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 21:27:06 by allauren          #+#    #+#             */
/*   Updated: 2017/10/05 21:35:30 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void		set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
	}



int main(int argc, const char *argv[])
{
		t_point	point;

	set_point(&point);
	return 0;
}

