#include <libft.h>

int ft_isprint(int c)
{
  int  state;

  state = 0;
  if (c >= 32 && c <= 126)
    state  = c;
  return (state);
}
