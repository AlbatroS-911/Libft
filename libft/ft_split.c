/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:27:36 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/26 21:48:31 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

static int count_words(const char *str, char sep)
{
	int	i;
	int count;
	while (*str)
	{
		while (str[i] == sep)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (count);
}
char	**ft_split(char const *s, char c)
{
	char	**splitted_str;
	int	i;
	int	j;
	int	k;
	
	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return(NULL);
	splitted_str = malloc((count_words(s, c) + 1) * sizeof(char *));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			splitted_str[k++] = ft_substr(s, j, i);
	}
	splitted_str[k] = NULL;
	return (splitted_str);
}
