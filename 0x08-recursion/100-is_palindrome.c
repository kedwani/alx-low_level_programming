#include "main.h"
int _strlen_recursion(char *s);
int my_func (char *s, int i, int x);
int is_palindrome(char *s);

int is_palindrome(char *s)
{
  int i = _strlen_recursion(s);
  return (my_func(s, i - 1, 0));
}


int _strlen_recursion(char *s)
{
  if (*s == '\0')
    return (0);
  return (1 + _strlen_recursion(s + 1));
}
int my_func (char *s, int i, int x)
{
  if (x >= i)
    return (1);
  if (s[x] == s[i])
    return (1 * my_func(s, i - 1, x + 1));
  else
    return (0);
}
