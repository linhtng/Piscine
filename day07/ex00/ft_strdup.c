/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:31:05 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/07 14:44:53 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;
	char	*ptr;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *) malloc(sizeof(*src) * (i + 1));
	ptr = str;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (str);
}
