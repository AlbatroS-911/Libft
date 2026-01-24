/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:24:37 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/24 03:08:18 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"
#include "string.h"


int main()
{
	char s[] = "hey ciao my bud civil monkey. I can see your can inside my closet";
	char **res;
	int i;

	res = ft_split(s, 'c');
	while (i < 25)
	{
		ft_putstr_fd(res[i], 1);
		ft_putchar_fd(' ', 1);
		i++;
	}
 	return 0;
}
