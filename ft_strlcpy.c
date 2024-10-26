/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:41:07 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/22 16:32:23 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    int i;

    i = 0;
    int destlen = ft_strlen(dest);
    if (size < 1)
        return (ft_strlen(src));
    else if (i < size - 1 && src[i])
    {   
        while (i < size)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (ft_strlen(dest));
}