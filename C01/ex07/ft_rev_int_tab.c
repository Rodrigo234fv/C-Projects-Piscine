/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rodrigoalbuquerquesantoslima@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:59:12 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/17 22:59:12 by rode-alb         ###   ########.fr       */
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
