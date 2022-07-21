/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_to_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:52:23 by jofoto            #+#    #+#             */
/*   Updated: 2022/07/16 18:09:41 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void    print_list(t_list *list)
{
    while (list)
    {
        ft_putstr(list->data);
        list = list->next;
    }
}
t_list	*file_to_str_list(int fd, char *buf)
{
	//char	*x;
	int	ret;
	t_list *list = NULL;

	while ((ret = read(fd, buf, 1)))
	{											//read 1 char from stdinput, save it to x
		ft_list_push_back(&list, buf);			// pass x as argument to be the value of the next node in the list
	}
	return (list);
	/*************** test *****************/
	print_list(list);
}
