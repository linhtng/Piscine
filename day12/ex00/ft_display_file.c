/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:01:45 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/14 16:24:23 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_list.h"

#define BUF_SIZE 10

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = 1;
	if (argc <= 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many argument.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		while (ret)
		{
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
	return (0);
}
