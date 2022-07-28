/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:58:18 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 18:58:18 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    //work in progress    
}