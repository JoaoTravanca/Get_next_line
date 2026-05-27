/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:53:12 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/27 16:05:17 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen_mod (const char *s, char c)
{
	size_t	i;

	i = 0;
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

char *ft_strjoin (const char *s1, const char *s2)
{
	char	*new;
	char	*ptr;
	
	new = malloc ((ft_strlen_mod (s1, 0) + ft_strlen_mod(s2, 0) + 1) * sizeof (char));
	if (!new)
		return (NULL);
	ptr = new;
	while (*s1)
		*new++ = *s1++;
	while (*s2)
		*new++ = *s2++;
	*new = '\0';
	return (ptr);
}

char *ft_strim_mod (char *s)
{
	int start;
	char *new;
	int		i;

	i = 0;
	start = 0;
	while (s[start] && s[start] != '\n')
		start++;
	if (s[start] == '\n')
		start++;
	new = malloc ((ft_strlen_mod (s, 0) - start + 1) * sizeof(char));
	if (!new)
    	return (NULL);
	while (s[start] != '\0')
	{
		new[i] = s[start]; 
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

char *ft_linetrim (char *str)
{
	char *new;
	int	i;

	i = 0;
	new = malloc (ft_strlen_mod(str, '\n') + 1);
	while (str[i] && str[i] != '\n')
	{
		new[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		new[i] = '\n';
		new[++i] = '\0';
	}
	else
		new[i] = '\0';
	return (new);
} 