/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:24:37 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/23 08:43:31 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"
#include "string.h"

int main()
{
	char str[] = "abcdef";
	//char src[] = "geeks";
	char d[] = "abcdef";
	memmove(str, str + 2, 4 * sizeof(char));
	printf("%s\n", str);
	ft_memmove(d, d + 2, 4 * sizeof(char));
	printf("%s", str);
	return 0;
}
