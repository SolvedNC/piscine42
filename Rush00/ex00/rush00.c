/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 16:18:40 by smira             #+#    #+#             */
/*   Updated: 2019/09/01 17:39:19 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_erreur(void)
{
	write(1, "ERREUR, valeur negative", 24);
	return ;
}

void	rush(int x, int y)
{
	int h;
	int w;

	if (x < 0 || y < 0)
		ft_erreur();
	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			if ((h == 1 && (w == x || w == 1)) ||
				(h == y && (w == x || w == 1)))
				ft_putchar('o');
			else if ((w > 1 && w < x) && (h != 1 && h != y))
				ft_putchar(' ');
			else if ((w == 1 || w == x) && (h > 1 && h < y))
				ft_putchar('|');
			else
				ft_putchar('-');
			w++;
		}
		h++;
		ft_putchar('\n');
	}
}
