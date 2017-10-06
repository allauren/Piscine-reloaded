/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 12:01:53 by allauren          #+#    #+#             */
/*   Updated: 2017/10/05 17:41:51 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_calc_sqrt(int nb, int i)
{
	if (nb < 0)
		return (0);
	if(i < nb / i)
		return(ft_calc_sqrt(nb, i + 1));
	if (i * i == nb)
		return(i);
	return(0);
}

int		ft_sqrt(int nb)
{
	return(ft_calc_sqrt(nb, 1));
}
