/*
** my_strlowcase.c for my_strlowcase.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:27:18 2015 leleu julien
** Last update Sun Oct 18 17:09:44 2015 leleu julien
*/

char	*my_strlowcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90)
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
