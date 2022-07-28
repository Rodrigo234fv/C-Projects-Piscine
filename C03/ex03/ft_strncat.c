/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:28:24 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 10:28:24 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int n;
    int a;

    n = 0;
    a = 0;
    while (dest[n] != '\0')
    {
        n++;
    }
    while (src[a] != '\0' && nb-- != 0)
    {
        dest[n++] = src[a++];
    }
    dest[n] = '\0';
    return (dest);
}