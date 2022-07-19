/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rodrigoalbuquerquesantoslima@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 01:01:45 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/19 01:01:45 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char i;

    i = 'a';
    while (i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }   
}
int main (void)
{
    ft_print_alphabet();
}