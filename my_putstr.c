/*
** my_putstr.c for my_putstr.c in /home/leleu_j/rendu/Piscine_C_J04
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Thu Oct  1 13:20:27 2015 leleu julien
** Last update Wed Oct 14 17:07:41 2015 leleu julien
*/

int	my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
