/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:45:06 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/27 23:45:06 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
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

    str = "BBBHJJFZTTTVGHHKTVBGNKIBIVFUZF";
    
    printf("is alpha: %d\n", ft_str_is_uppercase(str));
    return 0;
}