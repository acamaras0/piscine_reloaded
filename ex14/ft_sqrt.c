/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:47:41 by acamaras          #+#    #+#             */
/*   Updated: 2021/10/29 12:33:13 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	if (nb <= 0 )
		return (0);
	while (count * count != nb && count * count < nb && count < 46340)
		count++;
	if (count * count == nb)
		return (count);
	else
		return (0);
}
