/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:16:48 by thuynguy          #+#    #+#             */
/*   Updated: 2022/06/30 18:27:23 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(-54450);
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(4654);
	return (0);
}
