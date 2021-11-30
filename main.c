#include "checkmate.h"

int	check_bishop(char **board, t_point king, int f)
{
	if (board[king.row - f][king.col - f] != 'B' && board[king.row - f][king.col + f] != 'B' && board[king.row + f][king.col + f] != 'B' && board[king.row + f][king.col - f] != 'B')
	{
		check_bishop(board, king, f++);
		return (0);
	}
	else
		return (1);
}


int	ft_checkmate(char **board, t_point king)
{
	if (check_pawn(board, king))
		return (1);
	if (check_bishop(board, king, 1))
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
		if (ft_checkmate(board, king))
			ft_putstr("Success");
		else
			ft_putstr("Fail");
		free(board);
	}
	ft_putchar('\n');
	return (0);
}
