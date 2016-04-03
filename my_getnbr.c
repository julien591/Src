/*
** my_getnbr.c for C:\Users\Julien\Desktop\rendu in C:\Users\Julien\Desktop\rendu\Fonctions
**
** Made by Julien Leleu
** Login   <Julien@epitech.net>
**
** Started on  Mon Jan 25 10:15:31 2016 Julien Leleu
** Last update Mon Jan 25 10:15:38 2016 Julien Leleu
*/

int	my_getnbr(char *str)
{
  int i;
  int nbr;
  int negatif;

  i = 0;
  nbr = 0;
  negatif = 0;
  while (str[i] != '\0')
    {
      while (str[i] < '0' || str[i] > '9')
	{
	  if (str[i] == '-')
	    negatif++;
	  i++;
	}
      while (str[i] >= '0' && str[i] <= '9')
	{
	  nbr = ((nbr * 10) + (str[i] - 48));
	  i++;
	}
    }
  if (negatif % 2 != 0)
    nbr = -nbr;
  return (nbr);
}
