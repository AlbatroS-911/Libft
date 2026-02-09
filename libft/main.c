/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toky <toky@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:24:37 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/09 17:47:17 by toky             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"
#include "string.h"


int main()
{
	char *s = "Falling for you again shawty";
	char **strs = ft_split(s, ' ');
	//char set[] = "t";
	int i;
	i = 0;
	while (strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	//printf("%s", ft_strtrim(s, "ab"));
 	return 0;
}
