/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:48:20 by rode-alb          #+#    #+#             */
/*   Updated: 2022/07/28 17:48:20 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src) //strcpy but with mallocs
{
    char *dest;
    int i;

    i = 0;
    dest = (char*)malloc(ft_strlen(src) * sizeof(char) + 1);
    if (!dest) //Protecting Malloc
    {
        return (0);
    }
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

#include <stdio.h>

int main(void)
{
    char *str;
    char *alloc;

    str = "Hello World with malloc";
    printf( "str name: %s orginal place:%p\n", str ,str);
    alloc = ft_strdup(str);
    printf("str name: %s and new memory allocation place:%p", alloc, alloc);
}

