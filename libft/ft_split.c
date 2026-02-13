/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:27:36 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/13 15:19:40 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

static int	count_words(const char *str, char sep);
char		**splitted_string(const char *s, char sep);

char	**ft_split(char const *s, char c)
{
	char	**splitted_str;

	if (!s || c)
		return (NULL);
	splitted_str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!splitted_str)
		return (NULL);
	splitted_str = splitted_string(s, c);
	return (splitted_str);
}

static int count_words(const char *str, char sep)
{
	int	i;
	int count;
	
	i = 0;
	count = 0;
	while (*str)
	{
		if (*str != sep && i == 0)
		{
			i = 1;
			count++;
		}
		else if(*str == sep)
			i = 0;
		str++;
	}
	return (count);
}

char	**splitted_string(const char *s, char sep)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	tab = malloc((count_words(s, sep) + 1) * sizeof(char *));
	while (*s && k < count_words(s, sep))
	{
		while (s[i] == sep)
			i++;
		j = i;
		while (s[i] != sep)
			i++;
		tab[k] = ft_substr(s, j, i - j);
		k++;	
	}
	tab[k] = NULL;
	return (tab);
}
