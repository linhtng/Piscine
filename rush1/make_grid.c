/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:06:28 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/09 21:21:55 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src);

char	**make_grid(int argc, char **argv)
{
	int		i;
	char	**grid;

	i = 0;
	grid = (char**) malloc(sizeof(char*) * 9);
	while (i < argc - 1)
	{
		grid[i] = ft_strdup(argv[i + 1]);
		i++;
	}
	return (grid);
}
