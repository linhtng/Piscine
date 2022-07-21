/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:36:43 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/12 17:41:24 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int	i;

	i = 2;
	if (length == 0 || length == 1)
		return (1);
	if (f(tab[0], tab[1]) < 0)
	{
		while (i < (length + 1))
		{
			if (f(tab[i - 1], tab[i - 2]) < 0)
				return (0);
			i++;
		}
		return (1);
	}
	while (i < (length + 1))
	{
		if (f(tab[i - 1], tab[i - 2]) > 0)
			return (0);
		i++;
	}
	return (1);
}
