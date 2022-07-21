/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:26:54 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/07 18:48:34 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	dif;
	int	*range;

	i = 0;
	dif = max - min;
	if (min >= max)
		range = 0;
	else
	{
		range = (int *) malloc(sizeof(int) * (dif + 1));
		while (i < dif)
		{
			range[i] = min + i;
			i++;
		}
		range[i] = '\0';
	}
	return (range);
}
