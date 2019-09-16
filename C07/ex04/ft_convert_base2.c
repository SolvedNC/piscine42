/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:27:21 by smira             #+#    #+#             */
/*   Updated: 2019/09/15 15:31:19 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_skip(char *str, int *neg)
{
	int		i;

	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13)))
		i++;
	i--;
	while (str[++i] && (str[i] == '-' || str[i] == '+'))
		if (str[i] == '-')
			*neg += 1;
	return (&str[i - 1]);
}

int			ft_check_base(char *base)
{
	int		i;
	int		i2;

	i = 0;
	while (base[i])
	{
		i2 = i + 1;
		while (base[i2])
		{
			if (base[i] == base[i2])
				return (0);
			i2++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' ||
			(base[i] >= 7 && base[i] <= 13))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int			ft_find_base(char c, char *base)
{
	int		i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int			ft_atoi_base(char *str, char *base)
{
	long int	nb;
	int			i;
	int			neg;
	int			base_l;

	base_l = ft_check_base(base);
	if (!base_l)
		return (0);
	nb = 0;
	i = 0;
	neg = 0;
	str = ft_skip(str, &neg);
	while (str[++i] && ft_find_base(str[i], base) >= 0)
	{
		nb *= base_l;
		nb += ft_find_base(str[i], base);
	}
	return (nb * (neg % 2 ? -1 : 1));
}
