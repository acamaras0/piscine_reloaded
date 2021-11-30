/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:30:45 by acamaras          #+#    #+#             */
/*   Updated: 2021/11/01 13:52:54 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	int		size;
	char	*dest;

	size = 0;
	while (src[size])
	{
		size++;
	}
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (!(dest))
		return (0);
	n = 0;
	while (n < size)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
