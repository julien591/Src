/*
** my_strapitalize.c for my_strcapitalize.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 13:28:32 2015 leleu julien
** Last update Sun Oct 18 18:13:11 2015 leleu julien
*/

char	*my_strcapitalize(char *str)
{
  int i;

  i = 1;
  if (str[0] >= 97 && str[0] <= 122)
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64)
	{
	  if (str[i + 1] >= 97 && str[i + 1] <= 122)
	    str[i + 1] = str[i + 1] - 32;
	}
      i++;
    }
  return (str);
}
