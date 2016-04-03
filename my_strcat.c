/*
** my_strcat.c for my_strcat.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:46:43 2015 leleu julien
** Last update Sun Oct 18 22:59:53 2015 leleu julien
*/

char	*my_strcat(char *dest, char *src)
{
  int i;
  int j;

  i = my_strlen(dest);
  j = 0;
  while (src[j] != '\0')
    dest[i++] = src[j++];
  dest[i] = '\0';
  return (dest);
}
