/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:29:27 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 10:29:27 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Finding a needle in a haystack :) 

char *ft_strstr(char *str, char *to_find)
{
    int n;
    int a;

    n = 0;
    a = a;
    if (to_find[a] == '\0')
    {
        return (str);
    }
    while (str[n] != '\0')
    {
        a = 0;
        while (str[n] && str[n++] == to_find[a++])
        {
            if (to_find[a] == '\0')
            {
                return (&str[n - a]);
            }
        }
    }
    return (0);
}