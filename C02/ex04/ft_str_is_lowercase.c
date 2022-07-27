/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:44:53 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/27 23:44:53 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
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

    str = "bolinha";
    
    printf("is alpha: %d\n", ft_str_is_lowercase(str));
    return 0;
}