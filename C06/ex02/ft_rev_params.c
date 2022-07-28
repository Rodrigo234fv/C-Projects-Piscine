/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:27:26 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 15:27:26 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
int main(int argc, char **argv)
{
    int i;

    i = 0;
    argc--;
    if (argc > 0)
    {
        while(argc > 0)
        {
            i = 0;
            while(argv[argc][i])
            {
                write(1, &argv[argc][i], 1);
                i++;
            }
            write(1, "\n", 1);
            argc--;
        }
    }
    return (1);
}