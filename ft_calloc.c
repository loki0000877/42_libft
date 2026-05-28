void  *ft_calloc(size_t nmemb, size_t size)
{
  void    *ptr;
  unsigned char  *p;
  size_t  total;
  size_t  i;

  i = 0;
  if (size != 0 && nmemb > SIZE_MAX/size) 
    return (NULL);
  total = nmemb * size;
  ptr = malloc(total);
  if (!ptr)
    return (NULL);
  p = (unsigned char *)ptr;
  while (i < total)
  {
    p[i] = 0;
    i++;
  }
  return(ptr);
}
