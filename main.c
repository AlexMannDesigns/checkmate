#include "checkmate.h"

int	check_pawn(char **board, size_t size, t_point king)
{
	//if previous row, inderow + 1 or - 1 == p then return 1, else 0.

	if (board[king.row - 1][king.col - 1] == 'P' || board[king.row - 1][king.col + 1] == 'P')
		return (1);
	else
		return (0);
}


int	ft_checkmate(char **board, size_t size, t_point king)
{
	if (check_pawn(board, size, king))
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	char 	**board;
	size_t 	size;
	t_point	king;

	if (argc > 1)
	{
		size = ft_strlen(argv[1]);
		board = create_board(argv, size, argc);
		king = find_king(board);
		if (ft_checkmate(board, size, king))
			ft_putstr("Success");
		else
			ft_putstr("Fail");
		free(board);
	}
	ft_putchar('\n');
	return (0);
}
