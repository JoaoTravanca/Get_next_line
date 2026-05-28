/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_storage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:05 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/28 18:51:36 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	*storage;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		bytes;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && !ft_strchr(storage, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(storage), storage = NULL, NULL);
		buffer[bytes] = '\0';
		storage = ft_strjoin_mod(storage, buffer);
	}
	if (!storage || *storage == '\0')
		return (free(storage), storage = NULL, NULL);
	line = ft_line_trim(storage);
	storage = ft_update_leftover(storage);
    return (line);
}

int	main(void)
{
	int		fd;
	char	*line;
	int		count;

	fd = open("teste.txt", O_RDONLY);
	if (fd == -1)
		return (perror("Erro ao abrir o ficheiro"), 1);
	count = 1;
	printf("--- A INICIAR A LEITURA ---\n");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		printf("Linha %d: %s", count++, line);
		free(line);
	}
	printf("\n--- FIM DO FICHEIRO ---\n");
	close(fd);
	return (0);
}