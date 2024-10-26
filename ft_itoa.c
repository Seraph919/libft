/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:08:18 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/25 05:42:25 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int integerlen(int number)
{
    int i;

    i = 0;
    if (number < 0)
    {
        number *= -1;
        i++;
    }
    while (number)
    {
        number/= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    long i;
    char *str;
    int index;

    i = 1;
    index = 0;
    str = (char *)malloc(sizeof(char) * integerlen(n));
    if (n == -2147483648)
    {
        str = "-2147483648";
        return (str);
    }
    if(!str)
        return (NULL);
    if (n < 0)
    {
        n *= -1;
        str[index++] = '-';
    }
    while (i * 10 < n)
        i*= 10;
    while (i)
    {
        str[index] = (n / i) + '0';
        n %= i;
        i /= 10;
        index++;
    }
    str[index] = '\0';

    return (str);
}
