/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:42:45 by smira             #+#    #+#             */
/*   Updated: 2019/09/19 12:02:36 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	if (length < 2)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			i = length;
	}
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			i = length;
	}
	if (i == length - 1)
		return (1);
	return (0);
}
