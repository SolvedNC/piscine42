/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:27:09 by smira             #+#    #+#             */
/*   Updated: 2019/09/19 17:49:34 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int		*mytab;
	int		i;

	i = 0;
	if (!(mytab = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		mytab[i] = (*f)(tab[i]);
		i++;
	}
	return (mytab);
}
