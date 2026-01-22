/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toky <toky@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:28:02 by toky              #+#    #+#             */
/*   Updated: 2026/01/22 20:31:45 by toky             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	unsigned const char *sr;

	dst = dest;
	sr = src;
	
	while (n > 0)
	{
		*dst = *sr;
		dst++;
		sr++;
		n--;
	}
	return (dest);
}