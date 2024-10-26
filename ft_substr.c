/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:08:40 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 17:13:55 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char *returned;

    i = 0;
    returned = (char *)malloc(sizeof(char) * len + 1);
    if (!returned)
        return (NULL);
    while (i < len)
    {
        returned[i] = s[start];
        i++;
        start++;
    }
    returned[i] = '\0';
    
    return (returned);
}
