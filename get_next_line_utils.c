/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:53:12 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/21 17:31:41 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen_mod (char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			break;
		i++;		
	}
	return (i);
}

#include <stdio.h>

int main (void)
{
	char *str = "o mundo e belo'\n'";
	int size = strlen_mod (str);
	
	printf("%d", size);
	return (0);
}