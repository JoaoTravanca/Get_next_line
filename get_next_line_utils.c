/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:53:12 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/25 18:41:35 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen (const char *s)
{
	size_t	i;
	i = 0;
	while (s[i] != '\0')
		i++;		
	return (i);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s + start, len);
	dst[len] = '\0';
	return (dst);
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
	
	new = malloc ((ft_strlen (s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (!new)
		return (NULL);
	ptr = new;
	while (*s1)
		*new++ = *s1++;
	//*new++;
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
	new = malloc ((ft_strlen (s) - start + 1) * sizeof(char));
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


#include <stdio.h>

int main (void)
{
	char *s1 = "Ola";
	char *s2 = " mundo";	
	char *new = ft_strjoin (s1, s2);
	printf("%s", new);
	free (new);
	return (0);
}