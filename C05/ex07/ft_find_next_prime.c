/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:29:02 by smira             #+#    #+#             */
/*   Updated: 2019/09/11 13:17:25 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	int		b;

	b = 1;
	if (nb <= 2)
		return (2);
	while (b)
	{
		if (ft_is_prime(nb) == 0)
			ft_is_prime(++nb);
		else
			return (nb);
	}
	return (0);
}
