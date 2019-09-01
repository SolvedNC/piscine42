/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:47:54 by smira             #+#    #+#             */
/*   Updated: 2019/09/01 17:36:16 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_erreur(void)
{
	write(1, "ERREUR , valeur negative", 25);
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
			if ((h == 1 && w == 1) || (h == y && w == 1))
				ft_putchar('A');
			else if ((h == 1 && w == x) || (h == y && w == x))
				ft_putchar('C');
			else if ((w > 1 && w < x) && (h != 1 && h != y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			w++;
		}
		h++;
		ft_putchar('\n');
	}
}
