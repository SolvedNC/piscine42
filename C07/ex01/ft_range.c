/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:24:33 by smira             #+#    #+#             */
/*   Updated: 2019/09/13 16:42:20 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		j;

	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	j = min;
	i = 0;
	while (j < max)
		tab[i++] = j++;
	return (tab);
}
