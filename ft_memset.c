
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:28:41 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/22 23:36:15 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		*((unsigned char *)ptr + i) = (unsigned char)x;
		i++;
	}
	return (ptr);
}