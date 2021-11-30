#include "checkmate.h"

int	check_pawn(char **board, t_point king)
{
	if (board[king.row - 1][king.col - 1] == 'P' || board[king.row - 1][king.col + 1] == 'P')
		return (1);
	else
		return (0);
}


