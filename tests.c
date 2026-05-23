char *ft_strjoin (const char *s1, const char *s2)
{
	char	*new;
	char	*ptr;
	new = ptr;
	new = malloc ((ft_strlen (s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (!new)
		return (NULL);
	while (*s1)
		*ptr++ = *s1++;
	*ptr++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (new);
}