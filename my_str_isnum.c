/*
** my_str_isnum.c for my_str_isnum.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:31:14 2015 leleu julien
** Last update Sat Oct 24 16:39:27 2015 leleu julien
*/

int	my_str_isnum(char *str)
{
  int i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] >= 48 && str[i] <= 57)
	i++;
      else
	return (0);
    }
  return (1);
}
