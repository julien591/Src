/*
** my_str_isalpha.c for my_str_isalpha.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:30:07 2015 leleu julien
** Last update Sun Oct 18 18:37:40 2015 leleu julien
*/

int	my_str_isalpha(char *str)
{
  int i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
	i++;
      else
	return (0);
    }
  return (1);
}
