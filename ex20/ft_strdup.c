/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:32:59 by allauren          #+#    #+#             */
/*   Updated: 2017/10/05 18:38:47 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int i;
	char *ptr;

	i = 0;
	while(str[i])
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while(str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}
