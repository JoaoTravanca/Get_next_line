/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:05 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/25 19:56:51 by jtravanca        ###   ########.fr       */
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

char *get_string (char *s, int choice)
{
	char *new1;
	char *new2;
	int		i;
	
	i = 0;
	while (s[i] !=)
	while ()
}

char *get_next_line(int fd)
{
	static char *next;
	char buf[BUFFER_SIZE + 1];
	char *temp;
	ssize_t	bytes;
	char *old;
	char *line;
	if (next)
	{
		temp = ft_strdup(next);
		if (ft_strchr(next, '\n'))
		{
			free (next);
			old = temp;
			next = ft_strim_mod(old);
			return temp;
		}	
	}
	else
		temp = ft_strdup("");
	while ( !(ft_strchr(temp, '\n')))
	{
		bytes = read (fd, buf, BUFFER_SIZE);
		if (bytes <= 0)
			break;
		buf[bytes] = '\0';
		old = temp;
		temp = ft_strjoin(temp, buf)
		free (old);		
	}
	if (next)
	(
		line = ft_strjoin (next, temp);	
	)
	return (line);
}

int main (void)
{

	
	return (0);
}