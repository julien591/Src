/*
** my_strupcase.c for my_strupcase.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:25:57 2015 leleu julien
** Last update Sat Oct 24 16:36:04 2015 leleu julien
*/

char	*my_strupcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
