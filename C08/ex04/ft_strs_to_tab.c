/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:24:19 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/29 08:24:19 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src) 
{
    char *dest;
    int i;

    i = 0;
    dest = (char*)malloc(ft_strlen(src) * sizeof(char) + 1);
    if (!dest)
    {
        return (0);
    }
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    struct s_stock_str  *array;

    i = 0;
    array = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
    if (!array)
    {
        return (0);
    }
    while (i < ac)
    {
        array[i].str = av[i];
        array[i].copy = ft_strdup(av[i]);
        array[i].size = ft_strlen(av[i]);
        i++;
    }
    array[i].str = 0;
    array[i].copy = 0;
    return (array);
}
