/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:48:53 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/09 21:06:05 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sudoku(char **grid)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			ft_putchar(grid[row][col]);
			ft_putchar(' ');
			col++;
		}
		col = 0;
		ft_putchar('\n');
		row++;
	}
}
