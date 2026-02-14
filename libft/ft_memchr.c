/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 11:58:29 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/14 07:48:47 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;

	str = (unsigned char *)s;
	count = 0;
	while (*str && count < n)
	{
		if (str[count] == c)
			return (&str[count]);
		count++;
	}
	return (NULL);
}
