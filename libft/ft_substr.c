/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:53:47 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/23 18:03:12 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"string.h"
#include"stdlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sub_str;
	unsigned int k;

	str = (char *)s;
	k = 0;
	sub_str = (char*)malloc((len - start) * sizeof(char));
	if(!sub_str)
		return (NULL);
	while (str[start - 1] && k < len && start - 1 < len)
	{
		sub_str[k] = str[start - 1];
		k++;
		start++;
	}
	return (sub_str);
}