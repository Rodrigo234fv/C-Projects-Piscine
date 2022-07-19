/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rodrigoalbuquerquesantoslima@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 01:04:48 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/19 01:04:48 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                write (1, &a, 1);
                write (1, &b, 1);
                write (1, &c, 1);
                if (a != '7')
                {
                    write (1, ",", 1);
                    write (1, " ", 1);
                }
                c++;
            }
        b++;
        }
    a++;
    }
}
int main(void)
{
    ft_print_comb();
}