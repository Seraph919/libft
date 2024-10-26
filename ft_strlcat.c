/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:42:42 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/22 22:02:20 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int	ftt_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ld;
	unsigned int	ls;

	i = 0;
	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	if (size <= ld)
	{
		return (size + ls);
	}
	while (src[i] && ld + i < (size - 1))
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (ld + ls);
}

int main()
{
	char *s = "wach akhay";

}
