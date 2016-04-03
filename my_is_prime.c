/*
** my_is_prime.c for my_is_prime.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 12:59:31 2015 leleu julien
** Last update Sat Oct 17 15:41:54 2015 leleu julien
*/

int	my_is_prime(int nb)
{
  int i;

  i = 2;
  if (nb == 1 || nb == 2)
    return (0);
  while (i < nb)
    {
      if ((nb % i) == 0)
	return (0);
      i++;
    }
  return (1);
}
