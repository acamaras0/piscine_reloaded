/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:12:52 by acamaras          #+#    #+#             */
/*   Updated: 2021/10/28 16:42:56 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb != 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (fact);
}
