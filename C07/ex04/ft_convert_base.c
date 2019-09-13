/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:27:03 by smira             #+#    #+#             */
/*   Updated: 2019/09/13 17:20:59 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_check_base(char *base);

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_nblen(int nbr, int base_len)
{
	long int	nb;
	int			len;

	nb = nbr;
	len = 1;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb / base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return (len + 1);
}

char	*ft_fillnb(char *nbr, int nb, int size, char *base)
{
	long int	n;
	int			i;
	int			base_len;

	base_len = ft_strlen(base);
	n = nb;
	i = 0;
	if (n < 0)
	{
		nbr[0] = '-';
		n = -n;
	}
	if (n == 0)
		nbr[0] = base[0];
	while (n)
	{
		nbr[size - 2 - i] = base[n % base_len];
		i++;
		n = n / base_len;
	}
	nbr[size - 1] = '\0';
	return (nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*snb;
	int		nb_len;
	int		base_len;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	base_len = ft_strlen(base_to);
	nb_len = ft_nblen(nb, base_len);
	if (!(snb = (char *)malloc(sizeof(char) * nb_len)))
		return (0);
	snb = ft_fillnb(snb, nb, nb_len, base_to);
	return (snb);
}
