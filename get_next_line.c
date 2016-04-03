/*
** get_next_line.c for C:\Users\Julien\Desktop\rendu in C:\Users\Julien\Desktop\rendu\CPE_2015_getnextline
**
** Made by Julien Leleu
** Login   <Julien@epitech.net>
**
** Started on  Mon Feb 01 17:40:54 2016 Julien Leleu
** Last update Thu Feb 25 17:24:50 2016 Julien Leleu
*/

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

char		*my_realloc(char *str, int size)
{
  static char	*tmp;
  static int	i;

  i = 0;
  tmp = malloc(sizeof(char) * size);
  if (tmp == NULL)
    exit (84);
  while (i != size)
    {
      if (str[i] == '\n' || str[i] == '\0')
	i++;
      else
	{
	  tmp[i] = str[i];
	  i++;
	}
    }
  tmp[i] = '\0';
  free (str);
  return (tmp);
}

char		*line(int pos, char buf[READ_SIZE], char *to_ret, int fd)
{
  static int	i = 0;
  static int	total = 0;
  int		j;

  j = 0;
  total = pos;
  while (i <= total && j <= READ_SIZE)
    {
      if (j == READ_SIZE)
	return (to_ret);
      if (buf[i] == '\n' || buf[i] == '\0')
	{
	  i++;
	  to_ret[j] = '\0';
	  return (to_ret);
	}
      if (i >= total)
	{
	  total = read(fd, buf, READ_SIZE);
	  if (total < 0)
	    return (NULL);
	  i = 0;
	}
      to_ret[j++] = buf[i++];
    }
}

char		*get_next_line(const int fd)
{
  static char	buf[READ_SIZE];
  static int	pos;
  char		*to_ret;
  static int	boucle = 0;

  if (fd < 0)
    return (NULL);
  to_ret = malloc(sizeof(char) * (READ_SIZE + 1));
  if (to_ret == NULL)
    return (NULL);
  if (boucle == 0)
    pos = read(fd, buf, READ_SIZE);
  if (pos < 0)
    return (NULL);
  boucle = 1;
  line(pos, buf, to_ret, fd);
}
