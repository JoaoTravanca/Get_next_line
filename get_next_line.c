/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:05 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/21 19:06:13 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char ft_get_current_line ()

char *get_next_line(int fd)
{
	static char *full_str;
	char *line;
	int buffer;
	ssize_t bytes;

	bytes = read(fd, full_str, BUFFER_SIZE);
	full_str = malloc ((BUFFER_SIZE + 1) * sizeof (char ));
	
	return (line);
}

int main (void)
{

	
	return (0);
}