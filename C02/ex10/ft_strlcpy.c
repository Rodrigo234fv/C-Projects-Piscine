/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:45:59 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/27 23:45:59 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int x;

    x = ft_strlen(src);
    i = 0;
    if (size != 0)
    {
        while ((src[i] != '\0') && (i < size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (x);
}