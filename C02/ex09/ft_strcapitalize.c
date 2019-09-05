/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:37:20 by smira             #+#    #+#             */
/*   Updated: 2019/09/04 23:18:58 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				maj;

	i = 0;
	maj = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (maj && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!maj && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			maj = 0;
		}
		else
			maj = 1;
		i++;
	}
	return (str);
}
