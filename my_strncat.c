/*
** my_strncat.c for my_strncat.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:48:04 2015 leleu julien
** Last update Sat Oct 24 16:35:40 2015 leleu julien
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int i;
  int j;

  j = 0;
  i = my_strlen(dest);
  while (src[j] && i < nb)
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
