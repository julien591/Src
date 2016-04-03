/*
** my_strlen.c for my_strlen.c in /home/leleu_j/rendu/Piscine_C_J04
**
** Made by leleu julien
** Login   <leleu_j@epitech.net>
**
** Started on  Thu Oct  1 18:12:35 2015 leleu julien
** Last update Sun Apr  3 16:57:55 2016 John Doe
*/

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
