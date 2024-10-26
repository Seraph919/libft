/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:42:27 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 19:05:28 by asoudani         ###   ########.fr       */
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


int ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int k;
    int setlen;
    char *returned;

    i = 0;
    k = 0;
    setlen = ft_strlen(set);
    returned = ((char *)malloc(sizeof(char) * (ft_strlen(s1) - (setlen * 2)) + 1));
    if (!returned)
        return (NULL);
    while (s1[i])
    {
        if (s1[i] == set[0])
            if(ft_strcmp(&s1[i], set) == 0);
            {   
                while (setlen < (ft_strlen(s1) - setlen * 2))
                {    
                    returned[k] = s1[setlen];
                    setlen++;
                }
                returned[k] = '\0';
            }
        i++;
    }
    return (returned);
}

int main()
{
    char *s = "wachkamehamehawach";
    char *d = ft_strtrim(s,"wach");
    printf("%s", d);
}