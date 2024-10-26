/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:34:34 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/23 04:09:11 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int argument)
{
	int	casee = 0;
	if ((argument >= 'A' && argument <= 'Z') || (argument >= 'a' && argument <= 'z') 
	|| (argument >= '0' && argument <= '9'))
		casee = 1;
	return casee;
}