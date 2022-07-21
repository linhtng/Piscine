/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:44:25 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/02 19:10:21 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb >= 1)
	{
		fact = fact * ft_recursive_factorial(fact - 1);
	}
	else
	{
		fact = 1;
	}
	if (fact < 0 | nb < 0)
	{	
		fact = 0;
	}
	return (fact);
}
