/*
** my_power_rec.c for my_power_rec.c in /home/leleu_j/rendu/Piscine_C_J05
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Sat Oct  3 21:39:17 2015 leleu julien
** Last update Sat Oct 24 16:38:32 2015 leleu julien
*/

int	my_power_rec(int nb, int power)
{
  int nb_de_depart;

  nb_de_depart = 0;
  if (power < 0)
    return (0);
  else if (power == 0)
    return (1);
  else
    {
      nb_de_depart = nb;
      nb = my_power_rec(nb, power - 1) * nb_de_depart;
      return (nb);
    }
}
