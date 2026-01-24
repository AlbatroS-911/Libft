/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:12:19 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/23 15:38:13 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
char	*ft_strnstr(const char *big, const char *little , size_t len)
{
	char	*big_d;
	char	*lil_d;
	size_t i;
	size_t j;
	
	big_d = (char *)big;
	lil_d = (char *)little;
	i = 0;
	if(lil_d == NULL)
		return (big_d);
	while (big_d[i] != '\0' && i < len - 1)
	{
		j = 0;
		while (lil_d[j] != '\0' && (big_d[i + j] == lil_d[j]))
			j++;
		if(lil_d[j] == '\0')
			return (&big_d[i]);
		i++;
	}
	return (NULL);
}
