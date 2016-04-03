/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/leleu_j/rendu/Piscine_C_J07/lib/my
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Tue Oct  6 11:55:34 2015 leleu julien
** Last update Sat Oct 24 16:37:37 2015 leleu julien
*/

void	my_sort_int_tab(int *tab, int size)
{
  int i;
  int sort;
  int nb;

  nb = 0;
  sort = 0;
  while (sort == 0)
    {
      i = 0;
      sort = 1;
      while ((i + 1) < size)
	{
	  if (tab[i] > tab[i + 1])
	    {
	      sort = 0;
	      my_swap(&tab[i], &tab[i + 1]);
	    }
	  i = i + 1;
	}
      nb++;
    }
}
