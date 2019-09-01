/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 17:24:16 by smira             #+#    #+#             */
/*   Updated: 2019/09/01 17:38:56 by smira            ###   ########.fr       */
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
			if ((h == 1 && w == 1) || (h == y && y != 1 && w == x && x != 1))
				ft_putchar('A');
			else if ((h == y && w == 1) || (h == 1 && w == x))
				ft_putchar('C');
			else if ((h != 1 && h != y) && (w != 1 && w != x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			w++;
		}
		h++;
		ft_putchar('\n');
	}
}
