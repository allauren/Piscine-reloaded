/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:01:28 by allauren          #+#    #+#             */
/*   Updated: 2017/10/05 18:08:24 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char * str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int		main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		argc = 2;
		while(argv[argc - 1])
		{
			ft_putstr(argv[argc - 1]);
			ft_putchar('\n');
			argc++;
		}
	}
	return 0;
}
