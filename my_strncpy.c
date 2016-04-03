/*
** my_strncpy.c for my_strncpy.c in /home/leleu_j/rendu/Piscine_C_J06/ex_03
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Mon Oct  5 11:08:00 2015 leleu julien
** Last update Sat Oct 17 18:25:05 2015 leleu julien
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (i < n && dest[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
