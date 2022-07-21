/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:59:10 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/11 19:07:21 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	i;
	int	len;
	int	*map;

	i = 0;
	len = 0;
	while (tab[len] != '\0')
	{
		len++;
	}
	map = (int *) malloc(sizeof(*tab) * len + 1);
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
