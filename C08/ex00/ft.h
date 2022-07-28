/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:15:34 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 23:15:34 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// you can also use: #pragma once
#ifndef FT_H //checks if this identifier was defined 
# define FT_H //if not defined then it defines it

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

#endif //ends the upper if

/* This is a header file: you only have declarations.
 * You dont do the function you only declare that the function exists in another place.
 * So you just need to copy the signature of your funtcion to this header file.
 * You only declare the function here! You wont define it here!
 * in your main.c ==> #include "file_name.h" this will fetch the functions that you
 * declared on your h file.
*/
