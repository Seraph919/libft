/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:53:57 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/25 02:06:52 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strln(const char *s)
{
    int len = 0;
    while (s[len]) len++;
    return len;
}
int wordlen(char *s, char c)
{
    int i = 0;
    int len = 0;
    while (s[i] && s[i] == c) i++;
    while (s[i] && s[i] != c)
    {   
        len++;
        i++;
    }
    return len;
}
int countwords(char *s, char c)
{
    int i = 0;
    int counter = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c) i++;
        while (s[i] && s[i] != c)
        {
            if ((s[i] && s[i - 1] == c) || i == 0)
                counter++;
            i++;
        }
    }
    return counter;
}
void fillin(char *dest, const char *src, char c)
{
    int i = 0;
    int k = 0;
    while (src[i] && src[i] == c) i++;
    while (src[i] && src[i] != c)
        dest[k++] = src[i++];
    dest[k] = '\0';
}
char **ft_split(char *s, char c)
{
    int i = 0;
    int k = 0;
    int wordln;
    char **words = (char **)malloc(sizeof(char *) * (countwords(s,c) + 1));
    if (!words) return NULL;
    while (s[i])
    {
        while (s[i] && s[i] == c) i++;
        if (s[i] && s[i] != c)
        {
            wordln = wordlen(&s[i], c);
            words[k] = (char *)malloc(sizeof(char) * ( wordln + 1));
            if (!words[k])
            {
                while (k) free(words[k--]);
                free(words);
                return NULL;
            }
            fillin(words[k], &s[i], c);
        }
        i+= wordln;
        k++;
    }
    return words;
}