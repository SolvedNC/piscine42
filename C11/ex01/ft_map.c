/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:27:09 by smira             #+#    #+#             */
/*   Updated: 2019/09/18 15:45:31 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		f(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if ( nbr >= 10)
		f(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int			*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		*mytab;
	int		i;

	i = 0;
	if (!(mytab = (int *)malloc(sizeof(int) * lenght)))
		return (0);
	while (i < lenght)
	{
		mytab[i] = (*f)(tab[i]);
		i++;
	}
	return (mytab);
}

int 		main()
{
	int		*tab = {1, 2, 3, 4, 5};
	printf("%d\n", ft_map(tab, 5, f(tab));
}
