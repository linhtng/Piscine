/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_display.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:41:57 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/14 22:09:19 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_read_display(int fd, char *buf, int BUF_SIZE)
{
	int	ret;

	ret = 1;
	while (ret)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}
