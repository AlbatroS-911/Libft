/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:00:10 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/21 09:46:15 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
char *ft_strrchr(const char *s, int c)
{
	int	count;
	char	*res;

	res = (char*)&s[0];
	count = ft_strlen(s) - 1;
	while(count >= 0)
	{
		if(res[count] == c)
			return(&res[count]);
		count--;
	}
	return(NULL);
}