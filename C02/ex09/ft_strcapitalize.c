/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:42:15 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/27 23:42:15 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if ((str[i - 1] <= 47 || str[i - 1] >= 58 && str[i - 1] <= 64
        || str[i - 1] >= 91 && str[i - 1] <= 96
        || str[i - 1] >= 123))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        i++;
    }
    return (str);
}
#include <stdio.h>
int main (void)
{
    char str[] = "BAGUETEE, comment tu vas 42Bonjour quarante-deux vinte+et+un";

    ft_strcapitalize(str);
    
    printf("transforms: %s\n", str);
    return 0;
}