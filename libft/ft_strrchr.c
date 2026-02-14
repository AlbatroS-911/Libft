/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:00:10 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/14 07:59:29 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*res;

	res = (char *)s;
	count = ft_strlen(s) - 1;
	while (count >= 0)
	{
		if (res[count] == c)
			return (&res[count]);
		count--;
	}
	return (NULL);
}
