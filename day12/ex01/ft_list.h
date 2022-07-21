/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:11:38 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/14 22:05:10 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LIST_H
# define FT_LIST_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_read_display(int fd, char *buf, int BUF_SIZE);

#endif
