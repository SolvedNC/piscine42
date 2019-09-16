/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:12:46 by smira             #+#    #+#             */
/*   Updated: 2019/09/15 17:53:36 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	int				j;
	t_stock_str		*ret;

	if (!(ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		if (!(ret[i].copy = (char *)malloc(sizeof(char) * (ret[i].size + 1))))
			return (0);
		j = 0;
		while (j < ret[i].size)
		{
			ret[i].copy[j] = av[i][j];
			j++;
		}
		ret[i].copy[j] = '\0';
		i++;
	}
	ret[i].str = 0;
	return (ret);
}
