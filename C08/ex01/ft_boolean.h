/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:32:07 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 23:32:07 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h> //the h file has to include

# define EVEN_MSG   "I have an even number of arguments.\n"
# define ODD_MSG    "I have an odd number of arguments.\n"
# define EVEN(n)    (n % 2 == 0)   
# define TRUE       1
# define FALSE      0
# define SUCCESS    1

typedef int t_bool;

//typedef converts a word that you assign to a type of a varibale
//in this case t_bool is like an int. So t_bool i; is just like int i;

#endif
