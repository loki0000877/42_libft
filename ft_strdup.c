#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *ptr;
    size_t      size;
    size_t      i;

    size = ft_strlen(s);
    ptr = malloc(size + 1);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < size)
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
