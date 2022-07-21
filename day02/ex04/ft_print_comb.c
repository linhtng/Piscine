/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:53:24 by thuynguy          #+#    #+#             */
/*   Updated: 2022/06/30 21:34:11 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0' - 1;
	while (++digit1 <= '7')
	{
		digit2 = digit1;
		while (++digit2 <= '8')
		{
			digit3 = digit2;
			while (++digit3 <= '9')
			{
				ft_putchar(digit1);
				ft_putchar(digit2);
				ft_putchar(digit3);
				if (digit1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int	main(void);