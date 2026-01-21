/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:39:47 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/20 19:26:18 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t ft_strlen(const char *s)
{
	int length;
	
	if (s == NULL)
		return (0);
	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
