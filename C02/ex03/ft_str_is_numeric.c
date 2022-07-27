/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:44:24 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/27 23:44:24 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}

#include <stdio.h>
int main (void)
{
    char *str;
    int i;

    str = "01234567890123456789";
    
    printf("is numeric: %d\n", ft_str_is_numeric(str));
    return 0;
}