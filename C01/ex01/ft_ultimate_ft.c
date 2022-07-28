/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:44:56 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 09:44:56 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
int a;
int *ptr;
int **ptr2;
int ***ptr3;
int ****ptr4;
int *****ptr5;
int ******ptr6;
int *******ptr7;
int ********ptr8;
int *********ptr9;

a = 12;
ptr = &a;
ptr2 = &ptr;
ptr3 = &ptr2;
ptr4 = &ptr3;
ptr5 = &ptr4;
ptr6 = &ptr5;
ptr7 = &ptr6;
ptr8 = &ptr7;
ptr9 = &ptr8;
ft_ultimate_ft(ptr9);
printf("%d", a);
}