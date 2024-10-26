/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 06:05:16 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/24 03:46:14 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

char   *strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  k;

    i = 0;
    k = 0;
    while (i < len)
    {
        if (big[i] == little[k])
        {   
            if (ft_strcmp(&big[i], &little[i]) == 0)
                return ((char *)&big[i]);
            i++;
        }
        i++;
    }
    return ((char *)big);
}
int main()
{
    char *s1 = "wach akhay han ssat hani lya";
    char *s2 = "hani";
    printf("%s \n", strnstr(s1, s2, 22));
}