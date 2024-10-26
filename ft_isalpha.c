/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:34:48 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/22 15:09:21 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int argument)
{
	int	casee = 0;
	if ((argument >= 'A' && argument <= 'Z') || (argument >= 'a' && argument <= 'z'))
		casee = 1;
	return casee;
}