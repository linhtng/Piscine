/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:52:50 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/10 14:36:55 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_legal(char **grid, int row, int col, char digit);

int	solve_sudoku(char **grid, int row, int col)
{
	char	digit;

	digit = '1';
	if (row == 8 && col == 9)
		return (1);
	if (col == 9)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] != '.')
		return (solve_sudoku(grid, row, col + 1));
	while (digit <= '9')
	{
		if (check_legal(grid, row, col, digit))
		{
			grid[row][col] = digit;
			if (solve_sudoku(grid, row, col))
				return (1);
			grid[row][col] = '.';
		}
		digit++;
	}
	return (0);
}
