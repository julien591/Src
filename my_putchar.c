/*
** my_putchar.c for my_putchar in /home/leleu_j/rendu/Piscine_C_J07/lib/my
**
** Made by leleu julien
** Login   <leleu_j@epitech.net>
**
** Started on  Tue Oct  6 10:31:44 2015 leleu julien
** Last update Mon Nov 30 15:59:35 2015 Julien Leleu
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
