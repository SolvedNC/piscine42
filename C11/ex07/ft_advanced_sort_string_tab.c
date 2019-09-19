/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:14:11 by smira             #+#    #+#             */
/*   Updated: 2019/09/19 17:41:42 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		size;
	char	*tmp;

	i = 0;
	size = 0;
	if (tab[0] == 0)
		return ;
	while (tab[size])
		size++;
	while (i < size - 1)
	{
		if (i + 1 < size && (*cmp)(tab[i + 1], tab[i]) < 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	tab[i + 1] = 0;
}
