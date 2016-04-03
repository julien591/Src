/*
** my_strcmp.c for my_strcmp.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
**
** Made by leleu julien
** Login   <leleu_j@epitech.net>
**
** Started on  Tue Oct  6 13:22:19 2015 leleu julien
** Last update Sun Apr  3 16:57:06 2016 John Doe
*/

int	my_strcmp(char *s1, char *s2)
{
  int 	i;

  i = 0;
  while (s2[i] != '\0')
    {
      if (s1[i] == s2[i])
	i++;
      else
	return (-1);
    }
  return (0);
}
