/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:37:16 by allauren          #+#    #+#             */
/*   Updated: 2017/10/05 00:44:18 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		nb--;
		result = result * (nb);
	}
	return (result);
}
