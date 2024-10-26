/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:37:47 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 04:27:47 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(char* str, int chr)
{
    int i;

    i = 0;
    char *lastseen;
    int isseen = 0;
    while (str[i])
    {
        if (str[i] == chr)
        {
            isseen = 1;
            lastseen = &str[i];
        }
        i++;
    }
    if (isseen == 0)
        return (((void*)0));
    else
        return (lastseen);
}