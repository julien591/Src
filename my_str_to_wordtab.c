/*
** C:\Users\jlele\Desktop\rendu\minishell\wordtab.c for minishell2 in
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Mar 29 18:02:16 2016 John Doe
** Last update Tue Apr  5 11:21:55 2016 John Doe
*/

#include <stdlib.h>
#include "my.h"

char	**create_wordtab(int words)
{
  char	**tab;

  tab = malloc(sizeof(char *) * words);
  if (tab == NULL)
    return (NULL);
  return (tab);
}

int	count_word(char *str, char elem)
{
  int 	i;
  int	word;

  i = 0;
  word = 0;
  while (str[i] != '\0')
    {
      if (str[i] == elem)
	word++;
      i++;
    }
  return (word + 1);
}

int		count_char(char *str, char elem)
{
  static int	i = 0;

  while (i <= my_strlen(str) && str[i] != elem)
    i++;
  return (i + 1);
}

char	**my_str_to_wordtab(char *str, char elem)
{
  char	**ret;
  int	words;
  int	i;
  int	j;
  int	k;

  i = 0;
  k = 0;
  words = count_word(str, elem) + 1;
  ret = create_wordtab(words);
  while (i <= my_strlen(str))
    {
      ret[k] = malloc(sizeof(char) * (count_char(str, elem) + 2));
      j = 0;
      while (str[i] != elem && str[i] != '\0')
	{
	  ret[k][j] = str[i];
	  i++;
	  j++;
	}
      ret[k][j] = '\0';
      i++;
      k++;
    }
  ret[k] = NULL;
  return (ret);
}
