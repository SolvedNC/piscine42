/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:10:12 by thgermai          #+#    #+#             */
/*   Updated: 2019/09/15 16:25:01 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct 		s_word
{
	char			*value;
	char			*word;
}					t_word;

char				**parsing(char *file_name, char **dictionary);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
void				convert(char *nb, t_word **dictonary);
t_word				**convert_dictionary(char **dictionary);
int					ft_recursive_power(int nb, int power);
int					ft_strcmp(char *s1, char *s2);

#endif
