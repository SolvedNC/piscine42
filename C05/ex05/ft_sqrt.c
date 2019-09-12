/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:08:12 by smira             #+#    #+#             */
/*   Updated: 2019/09/11 01:38:53 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		racine;
	int		sqrt;

	racine = 1;
	sqrt = 0;
	while (racine * racine <= nb && racine < 46341)
	{
		sqrt = racine * racine;
		if (sqrt == nb)
			return (racine);
		racine = racine + 1;
	}
	return (0);
}
