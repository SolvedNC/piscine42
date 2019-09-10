/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:31:57 by smira             #+#    #+#             */
/*   Updated: 2019/09/06 15:39:50 by smira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char        *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;
    
    i = 0;
    j = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        while (str[i + j] == to_find[j])
        {
            if (j == '\0')
                return (str + i);
            j++;
        }
        j = 0;
        i++;
    }
    return (0);
}
