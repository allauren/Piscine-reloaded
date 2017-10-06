/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:13:55 by allauren          #+#    #+#             */
/*   Updated: 2017/10/05 00:20:35 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/bin/bash: :wq : commande introuvable
void	ft_print_alphabet(void)
{
	int i;
	i = 0;
	while ( i + 'a' != 'z' + 1)
	{
	ft_putchar(i + 'a');
	i++;
	}
}
