/*
** my_strcpy.c for my_strcpy.c in /home/leleu_j/rendu/Piscine_C_J06/ex_02
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Mon Oct  5 10:05:13 2015 leleu julien
** Last update Sun Oct 18 22:34:39 2015 leleu julien
*/

char	*my_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
