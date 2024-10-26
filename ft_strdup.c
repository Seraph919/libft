/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:47:20 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 16:56:55 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup( const char *str1 )
{
    int    i;
    char *allocated;
    
    i = 0;
    allocated = malloc(sizeof(char) * ft_strlen(str1) + 1);
    if (!allocated)
        return NULL;
    while (str1[i])
    {
        allocated[i] = str1[i];
        i++;
    }
    allocated[i] = '\0';
    return (allocated);
}

int main()
{
    char *s = "maroc";
    char *d = ft_strdup(s);
    printf("%s\n", d);
}