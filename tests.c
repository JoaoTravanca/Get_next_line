/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:28:13 by jtravanca         #+#    #+#             */
/*   Updated: 2026/05/25 18:41:04 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strim_mod (char *s)
{
	int start;
	char *new;
	int		i;

	i = 0;
	start = 0;
	while (s[start] && s[start] != '\n')
		start++;
	if (s[start] == '\n')
		start++;
	new = malloc ((ft_strlen (s) - start + 1) * sizeof(char));
	if (!new)
    	return (NULL);
	while (s[start] != '\0')
	{
		new[i] = s[start]; 
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

int main (void)
{
	char *str ="Hello\nWorld";
	char simbol = '\n';
	char *new = ft_strim_mod (str, simbol);
	printf("teste: %s\n", new);
}