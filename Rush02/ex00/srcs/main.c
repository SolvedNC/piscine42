/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:57:44 by thgermai          #+#    #+#             */
/*   Updated: 2019/09/15 10:41:01 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	main(int ac, char **av)
{
	char **dictionary;
	t_word **converted_dictionary;

	dictionary = NULL;
	if (ac == 2)
	{
		dictionary = parsing("./srcs/standard_dictionary", dictionary);
		converted_dictionary = convert_dictionary(dictionary);
		convert(av[1], converted_dictionary);
	}
	else if (ac == 3)
	{
		dictionary = parsing(av[1], dictionary);
		converted_dictionary = convert_dictionary(dictionary);
		convert(av[2], converted_dictionary);
	}
	return (0);
}
