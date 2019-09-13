/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:24:55 by smira             #+#    #+#             */
/*   Updated: 2019/09/13 16:43:10 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;
	int		j;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	j = min;
	i = 0;
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		*range = 0;
	else
		while (j < max)
			tab[i++] = j++;
	*range = tab;
	return (max - min);
}
