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
#include "ft_list.h"

#define BUF_SIZE 10

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 1;
	if (argc == 1)
		ft_read_display(STDIN_FILENO, buf, BUF_SIZE);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("No such file or directory\n");
			return (0);
		}
		ft_read_display(fd, buf, BUF_SIZE);
		i++;
	}
	return (0);
}
