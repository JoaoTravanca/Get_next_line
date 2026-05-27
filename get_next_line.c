/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:05 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/27 16:07:36 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	*next;
	char		buf[BUFFER_SIZE + 1];
	char		*temp;
	char		*line;
	ssize_t		bytes;

    if (!next)
        next = ft_strjoin("", "");
	while ( !(ft_strchr(next, '\n')))
	{
		bytes = read (fd, buf, BUFFER_SIZE);
		if (bytes <= 0)
			break;
		buf[bytes] = '\0';
		temp = ft_strjoin(next, buf);
		free (next);
		next = temp;		
	}
	if (!*next)
        return (NULL);
    line = ft_linetrim(next);
    temp = ft_strim_mod(next);
    free(next);
    next = temp;
    return (line);
}

int	main(void)
{
	int		fd;
	char	*line;
	int		line_count;

	fd = open("teste.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Erro ao abrir o ficheiro");
		return (1);
	}
	line_count = 1;
	printf("--- A INICIAR A LEITURA ---\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Linha %d: %s", line_count, line);
		free(line);
		line_count++;
	}
	printf("--- FIM DO FICHEIRO ---\n");
	close(fd);
	return (0);
}