/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:32:21 by smira             #+#    #+#             */
/*   Updated: 2019/09/06 15:39:43 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char        *ft_strstr(char *str, char *to_find);

int			main(void)
{
	char	str[] = "bonjour";
	char	tf[] = "x";

	printf("%s\n", ft_strstr(str, tf));
}
