/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:09:32 by allauren          #+#    #+#             */
/*   Updated: 2017/10/05 18:25:25 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		main(int argc, char *argv[])
{
	char	*temp;

	argc =  1;
	while(argv[argc])
	{
		if(ft_strcmp(argv[argc], argv [argc - 1]) < 0)
		{
			temp = argv[argc - 1];
			argv[argc - 1] = argv[argc];
			argv[argc] = temp;
			argc = 0;
		}
		argc++;
	}
	argc = 1;
	while(argv[argc - 1])
	{
		ft_putstr(argv[argc - 1]);
		ft_putchar('\n');
		argc ++;
	}

	return 0;
}
