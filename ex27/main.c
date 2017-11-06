/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:01:24 by allauren          #+#    #+#             */
/*   Updated: 2017/11/06 15:04:56 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#define BUF_SIZE 4096

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0)
			return (0);
		while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) < 0)
			return (0);
	}
	else if (argc > 2)
		write(1, "Too many arguments\n", 20);
	else
		write(1, "File name missing.\n", 19);
	return (0);
}
