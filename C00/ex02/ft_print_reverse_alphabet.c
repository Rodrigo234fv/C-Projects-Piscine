/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rodrigoalbuquerquesantoslima@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 01:01:56 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/19 01:01:56 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char i;

    i = 'z';
    while (i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}
int main(void)
{
    ft_print_reverse_alphabet();
}