/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:26:24 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 18:26:24 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *pointer;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    pointer = (int*)malloc(sizeof(pointer) * (max - min));
    if (!pointer)
    {
        *range = NULL;
        return (-1);
    }
    *range = pointer;
    i = 0;
    while(i < max - min)
    {
        pointer[i] = min + i;
        i++;
    }
    return (i);
}

# include <stdio.h>
int main(void)
{
    int min;
    int max;
    int *pointer;
    int size;
    int i;

    i = 0;
    min = -10;
    max = 10;
    size = ft_ultimate_range(&pointer, min ,max);
    while(i < size)
    {
        printf("%d, ", pointer[i]);
        i++;
    }
}