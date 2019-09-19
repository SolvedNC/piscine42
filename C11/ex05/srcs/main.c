/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:45:08 by smira             #+#    #+#             */
/*   Updated: 2019/09/19 14:24:13 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][1] != '\0')
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr(DZERO);
		ft_putchar('\n');
		return (0);
	}
	if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr(MZERO);
		ft_putchar('\n');
		return (0);
	}
	ft_doop(argv[1], argv[2], argv[3]);
	ft_putchar('\n');
	return (0);
}
