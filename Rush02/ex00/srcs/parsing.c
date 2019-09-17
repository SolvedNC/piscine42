/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:09:29 by thgermai          #+#    #+#             */
/*   Updated: 2019/09/14 21:10:14 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int		nb_of_split(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

char	*create_new_line(char *str)
{
	char	*line;
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (!(line = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = 0;
	return (line);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;

	i = 0;
	tab = NULL;
	if (!(tab = malloc(sizeof(char *) * (nb_of_split(str) + 1))))
		return (0);
	while (*str)
	{
		while (*str == '\n')
			str++;
		tab[i] = create_new_line(str);
		while (*str != '\n' && *str)
			str++;
		str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**parsing(char *file_name, char **dictionary)
{
	int		fd;
	int		i;
	char	t;
	char	*buffer;

	i = 0;
	t = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &t, 1) != 0)
		i++;
	close(fd);
	if (!(buffer = malloc(sizeof(char) * (i + 1))))
		return (0);
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buffer, i);
	close(fd);
	buffer[i] = '\0';
	dictionary = ft_split(buffer);
	free(buffer);
	return (dictionary);
}
