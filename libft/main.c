/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:24:37 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/26 21:44:21 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"
#include "string.h"


int main()
{
	char s[] = "Falling for you again shawty";
	char **strs = ft_split(s, ' ');
	//char set[] = "t";
	int i;
	i = 0;
	while (i < 5)
	{
		printf("%s ",strs[i]);
	}
	//printf("%s", ft_substr(s, 2, 15));
 	return 0;
}
