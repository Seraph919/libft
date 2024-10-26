/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 03:50:52 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 03:50:58 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int casee;
    int number;

    i = 0;
    casee = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {    
        if (str[i] == '-')
            casee *= -1;
        i++;
    }
    while ((str[i]>= '0' && str[i] <= '9'))
        number = number * 10 +(str[i++] - '0');
    return number * casee;
}