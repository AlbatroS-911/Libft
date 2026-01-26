/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 19:35:16 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/26 17:20:55 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

int	contain(const char *s, char c)
{
	while (*s && c != *s)
		s++;
	return (c == *s);
}

char *ft_strtrim(char const *s1,  char const *set)
{
	size_t	beg;
	size_t	end;
	char *trimmed_str;
	
	beg = 0;
	end = ft_strlen(s1);
	trimmed_str = malloc(ft_strlen(trimmed_str) *sizeof(char));
	if (!s1 || !set)
		return (NULL);
	if (beg == end)
		return (ft_strdup(""));
	while (contain(set, s1[beg]))
		beg++;
	while (contain(set, s1[end - 1]))
		end--;
	trimmed_str = ft_substr(s1, beg + 1, end);
	return(trimmed_str);
		
}
