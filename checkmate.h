#ifndef __CHECKMATE_H__ 

#define __CHECKMATE_H__

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef	struct 	s_point
{
	size_t		row;	
	size_t		col;
}			t_point;


void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(char *s);
char	**create_board(char **argv, size_t columns, int rows);
t_point	find_king(char **board);
int	check_pawn(char **board, t_point king);

#endif
