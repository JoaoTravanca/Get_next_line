/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:53:12 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/28 19:25:42 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_mod(const char *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
	{
		while (s[i] != '\0')
			i++;		
	}
	else
	{
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (s[i] == c)
			i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin_mod(char *s1, const char *s2)
{
	char	*new;
	char	*ptr;
	char	*ptr_s1;

	ptr_s1 = s1;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	new = malloc(ft_strlen_mod(s1, 0) + ft_strlen_mod(s2, 0) + 1);
	if (!new)
	{
		free(ptr_s1);
		return (NULL);
	}
	ptr = new;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	free(ptr_s1);
	return (new);
}

char	*ft_update_leftover(char *s)
{
	char	*new;
	int		start;
	int		i;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] && s[start] != '\n')
		start++;
	if (s[start] == '\n')
		start++;
	if (s[start] == '\0')
		return (free(s), NULL);
	new = malloc(ft_strlen_mod(s, 0) - start + 1);
	if (!new)
		return (free(s), NULL);
	i = 0;
	while (s[start] != '\0')
		new[i++] = s[start++];
	new[i] = '\0';
	free(s);
	return (new);
}

char	*ft_line_trim(char *str)
{
	char	*new;
	int		i;

	if (!str)
		return (NULL);
	new = malloc(ft_strlen_mod(str, '\n') + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		new[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		new[i] = '\n';
		i++;
	}
	new[i] = '\0';
	return (new);
}
