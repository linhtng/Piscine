/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:27:20 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/19 12:28:28 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

#define BUF_SIZE 1

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE + 1];
	char	*input_str;

	buf[1] = '\0';
	i = 1;
	if (argc == 1)
		ft_read_display(STDIN_FILENO, buf, BUF_SIZE);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			return (0);
		input_str = file_to_str(fd, buf);
		ft_putstr(input_str);
		if (close(fd) == -1)
			return (1);
		i++;
	}
	return (0);
}
