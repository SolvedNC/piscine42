/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:26:34 by smira             #+#    #+#             */
/*   Updated: 2019/09/15 16:43:00 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_retzero(void)
{
	char	*str;

	if (!(str = malloc(sizeof(char))))
		return (0);
	str[0] = '\0';
	return (str);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int		ft_strtotallen(int size, char **strs, char *sep)
{
	int		len;
	int		slen;
	int		i;
	int		j;

	len = 0;
	slen = ft_strlen(sep);
	j = 0;
	while (j < size)
	{
		i = ft_strlen(strs[j]);
		len += i;
		j++;
	}
	len += (slen * size - 1);
	return (len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	if (size <= 0)
		return (ft_retzero());
	len = ft_strtotallen(size, strs, sep);
	if (!(str = malloc(sizeof(char) * len)))
		return (0);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
