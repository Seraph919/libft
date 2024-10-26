# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memchr.c  not finished                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 05:39:33 by asoudani          #+#    #+#              #
#    Updated: 2024/10/24 03:39:04 by asoudani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

void *memchr(const void *str, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if ((*(unsigned char *)str)[i] == (unsigned char) c)
        {  
            return (((unsigned char *)str)[i]);
        }
    }
    return (NULL);
}