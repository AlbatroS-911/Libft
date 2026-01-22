/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toky <toky@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:59:09 by toky              #+#    #+#             */
/*   Updated: 2026/01/22 20:55:21 by toky             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

static void	ft_strcpy(unsigned char *s1,unsigned char *s2)
{
	int	i;

	i = 0;
	while (*s2)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	unsigned char *sr;
	unsigned char *temp;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;

	ft_strcpy(temp, sr);
	while (n > 0)
	{
		*dst = *temp;
		dst++;
		temp++;
		n--;
	}
	return (dest);
}