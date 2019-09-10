/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:44:48 by smira             #+#    #+#             */
/*   Updated: 2019/09/07 18:38:09 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_base_check(char *base)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	z = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		sizebase;
	int		final[100];
	int		i;

	if (ft_base_check(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		while (base[sizebase])
			sizebase++;
		while (nbr != 0)
		{
			final[i] = nbr % sizebase;
			nbr = nbr / sizebase;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[final[i]]);
	}
}
