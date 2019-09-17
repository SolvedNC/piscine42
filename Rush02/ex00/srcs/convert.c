/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:42:19 by thgermai          #+#    #+#             */
/*   Updated: 2019/09/15 17:01:20 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	**parsing_nb(char *nb)
{
	char	**tab;
	int		i;
	int		j;
	int		total;

	total = ft_strlen(nb) / 3;
	if (ft_strlen(nb) % 3 && total)
		total += 1;
	else if (ft_strlen(nb) % 3 && !total)
		total = 1;
	if (!(tab = malloc(sizeof(char *) * (total + 1))))
		return (NULL);
	i = ft_strlen(nb) - 1;
	tab[total] = NULL;
	total--;
	while (total >= 0)
	{
		if (!(tab[total] = malloc(sizeof(char) * 3)))
			return (NULL);
		j = 2;
		while (j >= 0)
		{
			if (nb[i])
				tab[total][j] = nb[i];
			else
				tab[total][j] = '0';
			i--;
			j--;
		}
		total--;
	}
	return (tab);
}

int		find_index(int nb, t_word **dictionary)
{
	int i;

	i = 0;
	while (dictionary[i]->value)
	{
		if (ft_strlen(dictionary[i]->value) == nb)
			return (i);
		i++;
	}
	return (i);
}

void	print_portion(char *nb, t_word **dictionary)
{
	int i;

	i = 0;
	(void)dictionary;
	if (nb[i] != '0')
	{

	}
}

void	convert(char *nb, t_word **dictionary)
{
	int		size;
	int		i;
	char	**nb_parsed;
	char	*div;

	i = 1;
	size = 0;
	(void)dictionary;
	nb_parsed = parsing_nb(nb);
	while (nb_parsed[size])
		size++;
	size = (size - 1) * 3;
	if (!(div = malloc(sizeof(char) * (i + 2))))
		return ;
	div[0] = '1';
	while (size > 0)
	{
		div[i] = '0';
		i++;
		size--;
	}
	while (ft_strcmp(div, dictionary[size]->value))
		size++;

}
