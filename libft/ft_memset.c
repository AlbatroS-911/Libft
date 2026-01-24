/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:28:22 by toky              #+#    #+#             */
/*   Updated: 2026/01/23 15:54:10 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;
	
	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = c;
		n--;
		str++;
	}
	return (str);
}