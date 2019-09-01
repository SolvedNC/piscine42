/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 13:01:42 by lauge             #+#    #+#             */
/*   Updated: 2019/09/01 19:26:12 by maboular         ###   ########.fr       */
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
