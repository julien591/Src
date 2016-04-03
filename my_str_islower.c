/*
** my_str_islower.c for my_str_islower.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:32:02 2015 leleu julien
** Last update Sat Oct 24 16:41:04 2015 leleu julien
*/

int	my_str_islower(char *str)
{
  int i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
	i++;
      else
	return (0);
    }
  return (1);
}
