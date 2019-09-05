/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:01:29 by smira             #+#    #+#             */
/*   Updated: 2019/09/05 15:11:09 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	sizedest;

	i = 0;
	sizedest = 0;
	while (dest[sizedest])
		sizedest++;
	while (src[i] && i < nb)
	{
		dest[sizedest] = src[i];
		i++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (dest);
}
