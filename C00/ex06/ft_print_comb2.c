/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:04:55 by smira             #+#    #+#             */
/*   Updated: 2019/09/02 17:40:26 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combinaisons(int a)
{
	int nb1;
	int nb2;

	if (a > 9)
	{
		nb1 = a / 10;
		nb2 = a % 10;
		ft_putchar(nb1 + 48);
		ft_putchar(nb2 + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(a + 48);
	}
}

void	ft_print_comb2(void)
{
	int f;
	int s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_combinaisons(f);
			ft_putchar(' ');
			ft_combinaisons(s);
			if (f < 98 || s < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			s++;
		}
		f++;
	}
}
