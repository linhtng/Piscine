/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:16:48 by thuynguy          #+#    #+#             */
/*   Updated: 2022/06/30 17:17:44 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	digit;

	digit = 48;
	while (digit <= 57)
	{
		ft_putchar(digit);
		digit++;
	}
}

int	main(void);
