/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:38:57 by allauren          #+#    #+#             */
/*   Updated: 2017/10/05 19:01:45 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return(0);
	tab = 0;
	tab = (int*)malloc(sizeof(int) *(max - min));
	if(!tab)
		return (0);
	while(min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
