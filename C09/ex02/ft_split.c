/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:28:49 by smira             #+#    #+#             */
/*   Updated: 2019/09/13 23:18:34 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_find_sep(char c, char *base)
{
	int		i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (1);
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int		words;
	int		i;
	int		j;

	i = 0;
	words = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] && ft_find_sep(str[i], charset))
			i++;
		while (str[i + j] && !ft_find_sep(str[i + j], charset))
			j++;
		if (j)
		{
			words++;
			i += j;
		}
	}
	return (words);
}

int		ft_strlen(char *str, char *charset)
{
	int		len;

	len = 0;
	while (str[len] && !ft_find_sep(str[len], charset))
		len++;
	return (len);
}

char	*ft_malword(char *str, char *charset)
{
	char	*word;
	int		wordlen;
	int		i;

	wordlen = ft_strlen(str, charset);
	if (!(word = (char *)malloc(sizeof(char) * (wordlen + 1))))
		return (0);
	i = 0;
	while (i < wordlen)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		nb_word;
	int		i;
	int		j;

	nb_word = ft_count_words(str, charset);
	if (!(split = (char **)malloc(sizeof(char *) * (nb_word + 1))))
		return (0);
	j = 0;
	i = 0;
	while (j < nb_word)
	{
		while (str[i] && ft_find_sep(str[i], charset))
			i++;
		if (str[i])
		{
			split[j] = ft_malword(&str[i], charset);
			i += ft_strlen(&str[i], charset);
		}
		j++;
	}
	split[j] = 0;
	return (split);
}
