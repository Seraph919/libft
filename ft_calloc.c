/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:24:28 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 16:46:17 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    char *ptr = (char *)malloc(nitems * size);
    if (!ptr)
        return NULL;
    ft_bzero(ptr, nitems * size);
    return ptr;
}

int main()
{
    int *tab = ft_calloc(4,sizeof(int));
    for (int i = 0; i < 4; i++)
        tab[i] = i + 1;
    printf("%d\n", tab[2]);
    
}