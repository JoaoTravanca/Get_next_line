/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:19 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/28 19:20:27 by jtravanca        ###   ########.fr       */
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

char 	*get_next_line(int fd);
size_t	ft_strlen_mod (const char *s, char c);
char	*ft_strchr(const char *s, int c);
char 	*ft_strjoin_mod (char *s1, const char *s2);
char 	*ft_update_leftover (char *s);
char 	*ft_line_trim (char *str);

#endif
