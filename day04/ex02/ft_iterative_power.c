/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:40:06 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/02 20:59:23 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power >= 0)
	{
		while (power >= 1)
		{	
			result = result * nb;
			power--;
		}		
		return (result);
	}
	else
	{
		return (0);
	}
}
