/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:53:12 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/21 19:24:46 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen_mod (const char *s)
{
	size_t	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			i++;
			break;
		}
		i++;		
	}
	return (i);
}

char *ft_strdup_mod (const char *s)
{
	char 	*new;
	size_t	i;
	new = malloc (ft_strlen_mod(s) * sizeof(char));
	while (i < ft_strlen_mod(s))
	{
		new[i] = s[i];
		i++;
	}
	if (s[i] == '\0')
		new[i] = '\0';
	return (new);
}

#include <stdio.h>

int main (void)
{
	char *str = "ISTO E\n UM TESTE";
	char *new = ft_strdup_mod (str);
	printf("%s", new);
	free (new);
	return (0);
}