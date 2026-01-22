/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toky <toky@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:24:37 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/22 21:01:02 by toky             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"
#include "string.h"

int main()
{
	char str[] = "abcdef";
	//char src[] = "geeks";
	memcpy(str + 2, str, 4);
	printf("%s\n", str);
	ft_memcpy(str + 2, str, 4);
	printf("%s", str);
	return 0;
}
