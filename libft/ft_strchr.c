/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:47:23 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/21 09:45:09 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char *ft_strchr(const char *s, int c)
{
	int	count;
	char	*res;

	res = (char*)&s[0];
	count = 0;
	while (*res)
	{
		if(res[count] == c)
			return(&res[count]);
		count++;
	}
	return (NULL);
}