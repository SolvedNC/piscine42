/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:18:07 by smira             #+#    #+#             */
/*   Updated: 2019/09/03 20:42:25 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int		tab[7] = {1, 2, 3, 4, 5, 6, 7};

	ft_rev_int_tab(tab, 7);
	
	int	i;
	i = 0;
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
}