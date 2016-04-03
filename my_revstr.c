/*
** my_revstr.c for my_revstr.c in /home/leleu_j/rendu/Piscine_C_J06/ex_04
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Mon Oct  5 15:15:24 2015 leleu julien
** Last update Sun Oct 18 22:39:15 2015 leleu julien
*/

char	*my_revstr(char *str)
{
  int i;
  int c;
  int t;

  i = 0;
  c = 0;
  t = 0;
  while (str[c] != '\0')
    c++;
  c - 1;
  while (i < c)
    {
      t = str[i];
      str[i] = str[c];
      str[c] = t;
      i++;
      c--;
    }
  return (str);
}
