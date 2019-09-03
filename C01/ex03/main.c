/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:18:07 by smira             #+#    #+#             */
/*   Updated: 2019/09/03 13:53:48 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int div;
	int mod;
	int *div;
	int *mod;

	div = &div;
	mod = &mod;

	ft_div_mod(100, 10, int *div, int *mod);
	printf("%d\n", *div);
	printf("%D\n", *mod);
}
