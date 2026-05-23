/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:05 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/23 12:51:21 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *ft_get_current_line (char *line)
{
	int	i;
	i = 0;
	while (line[i] != '\0' || line[i] != '\n')
		i++;
	line = malloc ((i + 1) * sizeof(char));
	
	return (line);
}

char *get_next_line(int fd)
{
	static char *estatic;
	char buf[BUFFER_SIZE + 1];
	char *temp;
	int	bytes;
	char *old;

	temp = ft_strdup (""); // why
	while ( !(ft_strchr(temp, '\n'))) // depois fazer um strjoin para line que vai acumular
	{
		bytes = read (fd, buf, BUFFER_SIZE);
		if (bytes <= 0)
			break;
		buf[bytes] = '\0';
		old = temp; // why
		temp = ft_strjoin(temp, buf)
		free (old);		
	}
	
	return (line);
}

int main (void)
{

	
	return (0);
}