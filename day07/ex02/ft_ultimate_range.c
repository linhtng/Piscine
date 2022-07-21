/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:05:46 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/07 20:06:16 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	dif;

	i = 0;
	dif = max - min;
	if (min >= max)
	{
		range = 0;
		dif = 0;
	}
	else
	{
		range[0] = (int *) malloc(sizeof(int) * dif + 1);
		while (i < dif)
		{
			range[0][i] = min + i;
			i++;
		}
		range[0][i] = '\0';
	}
	return (dif);
}
