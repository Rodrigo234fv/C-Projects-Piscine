/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:05:31 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 10:05:31 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Understand this exercise this will be on the final exam! :)

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int a;
    int b;

    i = 0;
    while(s1[i] != '\0' && (s1[i] == s2[i]))
    {
        i++;
    }
    a = s1[i];
    b = s2[i];
    return (a - b);
}

#include <stdio.h>
int main(void)
{
    char *s1;
    char *s2;
    int i;

    s1 = "Bolz";
    s2 = "Bola";

    i = ft_strcmp(s1, s2);

    printf("Value of Strcmp:%d\n", i);
}

/* The result is 0 if the strings are equal
 * The result is negative if the 1st non macthing char has a lower ascii
 * Then s2. And the reverse for a positive result.
*/
