/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:17:18 by smira             #+#    #+#             */
/*   Updated: 2019/09/19 13:26:14 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# define DZERO "Stop : division by zero"
# define MZERO "Stop : modulo by zero"

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_multiply(int a, int b);
int		ft_mod(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_doop(char *v1, char *op, char *v2);

#endif
