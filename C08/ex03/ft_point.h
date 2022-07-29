/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:31:42 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/29 00:31:42 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
        int x;
        int y;
}   t_point;

#endif

//structs are a way to group several related variables into one place.
//Each variable in the structure is known as a member of the structure.

//The C language contains the typedef keyword to allow users to provide
// alternative names for the primitive (e.g.,​ int) and user-defined​ (e.g struct) data types