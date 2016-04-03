/*
** my_put_nbr.c for my_put_nbr.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 11:27:08 2015 leleu julien
** Last update Sat Oct 24 16:38:52 2015 leleu julien
*/

int	my_put_nbr(int nb)
{
  int result;
  int diviseur;

  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = -nb;
	}
      diviseur = 1;
      while ((nb/diviseur) >= 10)
	diviseur = diviseur * 10;
      while (diviseur > 0)
	{
	  result = (nb/diviseur) % 10;
	  my_putchar(48 + result);
	  diviseur = diviseur / 10;
	}
    }
}
