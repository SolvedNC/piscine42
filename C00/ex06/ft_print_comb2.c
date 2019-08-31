/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:04:55 by smira             #+#    #+#             */
/*   Updated: 2019/08/30 16:51:58 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
		write(1, &c, 1);
}


void	ft_combinaisons(char a, char b ,char c, char d)
{
		if (a == 9 && b == 8 && c == 9 && d == 9)
		{
			ft_putchar(a + 48);
			ft_putchar(b+ 48);
			ft_putchar(' ');
			ft_putchar(c+ 48);
			ft_putchar(d+ 48);
		}
		else
		{
			ft_putchar(a+ 48);
			ft_putchar(b+ 48);
			ft_putchar(' ');
			ft_putchar(c+ 48);
			ft_putchar(d+ 48);
			ft_putchar(',');
			ft_putchar(' ');
		}

}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	while (a <= 9)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					ft_combinaisons(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb2();
}
