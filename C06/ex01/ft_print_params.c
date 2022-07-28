/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:22:35 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 15:22:35 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 1;
    if (argc > 1)
    {
        while(j < argc)
        {
            i = 0;
            while(argv[j][i])
            {
                write(1, &argv[j][i], 1);
                i++;
            }
            write(1, "\n", 1);
            j++;
        }
    }
    return (1);
}