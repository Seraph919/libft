/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 05:27:49 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 05:39:00 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *string1, const char *string2, size_t count)
{
    size_t i;

    i = 0;
    while (string1[i] && string2[i] && i < count)
    {
        if (string1[i] == string2[i])
            i++;
        else
            break;
    }
    return string1[i] - string2[i];
}