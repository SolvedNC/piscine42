/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:46:50 by smira             #+#    #+#             */
/*   Updated: 2019/09/19 13:10:54 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_finalnumber(unsigned int neg, int final)
{
	if (neg % 2 == 0)
		return (final);
	else
		return (-final);
}

int		ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	neg;
	int				final;

	i = 0;
	neg = 0;
	final = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final = final * 10;
		final = final + ((int)str[i] - 48);
		i++;
	}
	return (ft_finalnumber(neg, final));
}
