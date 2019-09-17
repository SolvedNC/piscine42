/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_dictionary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:50:18 by thgermai          #+#    #+#             */
/*   Updated: 2019/09/15 10:40:51 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

t_word	*create_array_element(char *str)
{
	t_word *element;
	int i;

	i = 0;
	if (!(element = malloc(sizeof(t_word) * 1)))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (!(element->value = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		element->value[i] = *str;
		str++;
		i++;
	}
	element->value[i] = '\0';
	while (*str == ' ')
		str++;
	if (*str != ':')
		return (NULL);
	str++;
	while (*str == ' ')
		str++;
	i = 0;
	while (str[i])
		i++;
	if (!(element->word = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = -1;
	while (str[++i])
		element->word[i] = str[i];
	element->word[i] = '\0';
	return (element);
}

t_word	**convert_dictionary(char **dictionary)
{
	int			i;
	int			size;
	t_word		**converted_dictionary;

	i = 0;
	size = 0;
	while (dictionary[size])
		size++;

	if (!(converted_dictionary = malloc(sizeof(t_word *) * (size + 1))))
		return (0);
	while (i < size)
	{
		converted_dictionary[i] = create_array_element(dictionary[i]);
		i++;
	}
	if (!(converted_dictionary[i] = malloc(sizeof(t_word) * 1)))
		return (0);
	converted_dictionary[i]->value = NULL;
	converted_dictionary[i]->word = NULL;
	return (converted_dictionary);
}
