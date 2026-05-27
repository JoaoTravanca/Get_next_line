/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:19 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/27 16:04:05 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char *get_next_line(int fd);
size_t ft_strlen_mod(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char *ft_strjoin(const char *s1, const char *s2);
char *ft_strim_mod(char *s);
char *ft_linetrim (char *str);

#endif
