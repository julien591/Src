/*
** my_strstr.c for my_strstr.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:12:34 2015 leleu julien
** Last update Sat Oct 24 16:13:28 2015 leleu julien
*/

char	*my_strstr(char *str, char *to_find)
{
  int i;
  int cpt;

  i = 0;
  cpt = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[cpt])
	cpt++;
      else
	cpt = 0;
      if (!to_find[cpt])
	{
	  i = i - (cpt - 1);
	  return (str + i);
	}
      i++;
    }
  return (0);
}
