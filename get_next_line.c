/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:05 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/25 20:26:13 by jtravanca        ###   ########.fr       */
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

char *ft_get_line (char *temp) // funcao para copiar de temp a \n
{
	char *new;
	int		i;
	
	i = 0;
	while (temp[i] != 0 && temp[i] != '\n')
		i++;
	if (temp[i] == '\n')
		str[i + 1] == '\0';
	return (str);

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
			return (temp);
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
		temp = ft_strjoin(temp, buf);
		free (old);		
	}
	if (*temp == '\0')
		return (NULL);
	line = temp;
	if (ft_strchr(temp, '\n'))
		next = ft_strim_mod(temp);
	return (line);
}

int main (void)
{

	
	return (0);
}