/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:41:54 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 04:18:39 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *str, int search_str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search_str)
			return (&str[i]);
		i++;
	}
	return (((void*)0));
}