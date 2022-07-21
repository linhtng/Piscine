/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:15:22 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/04 15:53:46 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	overflow(int index, int result, int sign)
{
	while (index > 11 && result > 1000000000)
	{
		if (sign == -1)
			result = 0;
		else
			result = -1;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	index;
	int	result;
	int	sign;

	index = 0;
	result = 0;
	sign = 1;
	while (str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + str[index] - '0';
		index++;
	}
	result = overflow(index, result, sign);
	return (result * sign);
}
