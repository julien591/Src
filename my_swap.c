/*
** my_swap.c for my_swap.c in /home/leleu_j/rendu/Piscine_C_J04
** 
** Made by leleu julien
** Login   <leleu_j@epitech.net>
** 
** Started on  Thu Oct  1 10:28:01 2015 leleu julien
** Last update Fri Oct  2 18:26:30 2015 leleu julien
*/

int	my_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
