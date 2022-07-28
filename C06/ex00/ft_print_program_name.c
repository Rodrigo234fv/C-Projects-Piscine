/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:11:38 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 15:11:38 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 1)
    {
        while (argv[0][i])
        {
            write(1, &argv[0][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}