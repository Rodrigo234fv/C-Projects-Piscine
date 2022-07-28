/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:46:08 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 09:46:08 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int         i;
    int         j;
    int src[size];

    i = 0;
    j = size - 1;
    while (tab[i] != '\0')
    {
        src[i] = tab[j];
        j--;
        i++;
    }
    i = 0;
    while (i < size)
    {
        tab[i] = src[i];
        i++; 
    }
}