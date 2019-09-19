/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:22:19 by smira             #+#    #+#             */
/*   Updated: 2019/09/19 13:43:59 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_doop(char *v1, char *op, char *v2)
{
	if (op[0] == '+')
		ft_putnbr(ft_add(ft_atoi(v1), ft_atoi(v2)));
	else if (op[0] == '-')
		ft_putnbr(ft_sub(ft_atoi(v1), ft_atoi(v2)));
	else if (op[0] == '/')
		ft_putnbr(ft_div(ft_atoi(v1), ft_atoi(v2)));
	else if (op[0] == '*')
		ft_putnbr(ft_multiply(ft_atoi(v1), ft_atoi(v2)));
	else if (op[0] == '%')
		ft_putnbr(ft_mod(ft_atoi(v1), ft_atoi(v2)));
	else
		ft_putnbr(0);
}
