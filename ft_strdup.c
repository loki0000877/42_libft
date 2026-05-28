char  *ft_strdup(const char *s)
{
  char    *s1;
  size_t  len;
  size_t   i;

  len = 0;
  while (s[len])
    len++;
  s1 = malloc(len + 1); 
  if (!s1)
    return (NULL);
  i = 0;
  while (i < len)
  {
    s1[i] = s[i];
    i++;
  }
  s1[i] = '\0';
  return (s1);
}
