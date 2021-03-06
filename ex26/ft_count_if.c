/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:39:44 by acamaras          #+#    #+#             */
/*   Updated: 2021/11/02 16:27:31 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			n++;
		}
		i++;
	}
	return (n);
}
