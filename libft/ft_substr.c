/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:53:47 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/13 13:45:33 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"string.h"
#include"stdlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*sub_str;
	unsigned int	k;

	str = (char *)s;
	k = 0;
	sub_str = (char*)malloc((len + 1) * sizeof(char));
	if(!sub_str)
		return (NULL);
	while (str[start] && k < len)
	{
		sub_str[k] = str[start];
		k++;
		start++;
	}
	sub_str[k] = '\0';
	return (sub_str);
}