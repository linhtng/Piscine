/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:09:42 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/04 21:06:28 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (src[len] != '\0' && n > 0)
	{
		dest[len] = src[len];
		len++;
		n--;
	}
	while (n > 0)
	{
		dest[len] = '\0';
		len++;
		n--;
	}
	return (dest);
}
