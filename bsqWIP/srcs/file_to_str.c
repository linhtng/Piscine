/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nolist_stdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:18:15 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/17 18:55:54 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_free_str(char *str)
{
	free(str);
	str = NULL;
}

char	*file_to_str(int fd, char *buf)
{
	char	*str1;
	char	*str2;

	str2 = malloc (sizeof(char) * 1);
	*str2 = '\0';
	while (read(fd, buf, 1))
	{
		str1 = ft_strdup(str2);
		free(str2);
		ft_strcat(str1, buf);
		str2 = str1;
	}
	return (str2);
}
