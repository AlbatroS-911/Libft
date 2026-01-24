/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:59:09 by toky              #+#    #+#             */
/*   Updated: 2026/01/23 20:39:26 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

/*static void	ft_strcpy(unsigned char *s1,unsigned char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	const unsigned char *sr;
	size_t i;
	
	i = 0;
	dst = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	if (dst > sr)
		while (n-- > 0)
			dst[n] = sr[n];
	else
		while(i < n)
		{
			dst[i] = sr[i];
			i++;
		}
	return (dst);
}
