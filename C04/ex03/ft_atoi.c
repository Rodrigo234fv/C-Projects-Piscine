/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:38:07 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 12:38:07 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    res = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while (str[i] && (str[i] > 47 && str[i] < 58))
    {
        res = (res * 10) + (str[i] - 48);
        i++;
    }
    return (res * sign);
}