/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:14:27 by smira             #+#    #+#             */
/*   Updated: 2019/09/06 16:35:50 by smira            ###   ########.fr       */
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
	unsigned int	j;

	(void)argc;
	(void)argv;
	i = 0;
	j = 1;
	while (argv[j])
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
	return (0);
}
