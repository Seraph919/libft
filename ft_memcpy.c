/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:19:30 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 04:10:51 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, int size)
{
    int i;

    i = 0;
    dest = malloc(size * sizeof(char));
    while (i < size)
    {
        ((char*)dest)[i] = ((char*)src)[i];
    }
    return (dest);
}