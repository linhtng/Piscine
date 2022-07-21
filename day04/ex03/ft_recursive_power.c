/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:07:06 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/02 21:51:46 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power >= 1)
	{
		result = result * ft_recursive_power(result, power - 1);
	}
	else if (power == 0)
	{
		result = 1;
	}
	else
	{
		return (0);
	}
	return (result);
}
