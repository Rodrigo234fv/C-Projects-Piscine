/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rodrigoalbuquerquesantoslima@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 01:03:55 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/19 01:03:55 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char i;
    i = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}
int main(void)
{
    ft_print_numbers();
}