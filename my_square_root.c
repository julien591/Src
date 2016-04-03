/*
** my_square_root.c for my_square_root.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 12:58:41 2015 leleu julien
** Last update Sat Oct 24 16:36:50 2015 leleu julien
*/

int	my_square_root(int nb)
{
  int i;

  i = 0;
  while ((i * i) != nb && nb != i)
    i++;
  if (i == nb)
    return (0);
  return (i);
}
