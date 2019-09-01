/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:40:11 by maboular          #+#    #+#             */
/*   Updated: 2019/09/01 19:24:51 by maboular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int h;
	int w;

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
