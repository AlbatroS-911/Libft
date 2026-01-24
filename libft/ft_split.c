/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 21:27:36 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/24 08:36:52 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char **splitted;
	int	i;
	int	j;
	int k;

	splitted = (char **) malloc(sizeof(char *) * ft_strlen(s));
	i = 0;
	k= 0;
	if (!splitted)
		return (NULL);
	while (splitted)
	{
		j = 0;
		while (s[k] != '\0')
		{
			splitted[i][j] = s[k];
			k++;
			if (s[k] == c)
				break;
		}
		k++;
		i++;
	}
	return (splitted);
}
