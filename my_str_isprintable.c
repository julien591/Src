/*
** my_str_isprintable.c for my_str_isprintable.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:34:18 2015 leleu julien
** Last update Sun Oct 18 22:53:14 2015 leleu julien
*/

int	my_str_isprintable(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] <= 126)
	i++;
      else
	return (0);
    }
  return (1);
}
