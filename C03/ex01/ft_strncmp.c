/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:16:14 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 10:16:14 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    unsigned int a;
    unsigned int b;

    i = 0;
    if (n != 0)
    {
        a = s1[i];
        b = s2[i];
    }
    while(s1[i] != '\0' && (s1[i] == s2[i]) && (n > i + 1))
    {
        i++;
        a = s1[i];
        b = s2[i];
    }
    return (a - b);
}

