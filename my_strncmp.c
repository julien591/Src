/*
** my_strncmp.c for my_strncmp.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:24:40 2015 leleu julien
** Last update Sat Oct 24 16:40:10 2015 leleu julien
*/

int	my_strncmp(char *s1, char *s2, int nb)
{
  int i;

  i = 0;
  while ((s1[i] || s2[i]) && i < nb)
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i++;
    }
  if ((s1[i] < s2[i]) && i < nb)
    return (-1);
  if ((s1[i] > s2[i]) && i < nb)
    return (1);
  return (0);
}
