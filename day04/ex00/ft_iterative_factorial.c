/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:11:54 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/02 18:31:11 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
	}
	else
	{
		fact = 0;
	}
	if (fact < 0)
	{
		fact = 0;
	}
	return (fact);
}
