/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:50:12 by smira             #+#    #+#             */
/*   Updated: 2019/09/07 19:09:01 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	z;

	(void)argc;
	(void)argv;
	i = 0;
	z = argc - 1;
	while (z > 0)
	{
		while (argv[z][i])
		{
			ft_putchar(argv[z][i]);
			i++;
		}
		ft_putchar('\n');
		z--;
		i = 0;
	}
	return (0);
}
