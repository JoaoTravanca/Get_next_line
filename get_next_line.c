/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:05 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/21 17:32:18 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *line;
	char buffer;
	line = malloc (ft_strlen_mod(line) * sizeof(char));
	read (fd, line, sizeof(buffer));
	return (line);
}

int main (void)
{

	
	return (0);
}