/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:27:36 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/26 20:21:53 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**splitted_str;
	char	*buffer;
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = 0;
	while (*s)
	{
		j = 0;
		while (j < ft_strlen(s))
		{
			buffer[j] = s[i];
			i++;
			j++;
			if (s[i] == c)
				break;
		}
		i = i + 1;
		ft_memcpy(splitted_str[k], buffer, j + 1);
		k++;
	}
	return (splitted_str);
}
