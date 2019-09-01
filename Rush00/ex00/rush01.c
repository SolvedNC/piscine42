/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 17:22:15 by lauge             #+#    #+#             */
/*   Updated: 2019/09/01 19:28:17 by maboular         ###   ########.fr       */
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
			if ((h == 1 && w == 1) || (h == y && y != 1 && w == x && x != 1))
				ft_putchar('/');
			else if ((h == y && w == 1) || (h == 1 && w == x))
				ft_putchar('\\');
			else if ((h != 1 && h != y) && (w != 1 && w != x))
				ft_putchar(' ');
			else
				ft_putchar('*');
			w++;
		}
		h++;
		ft_putchar('\n');
	}
}
