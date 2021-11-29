#include "checkmate.h"

void	ft_checkmate(char **board)
{
	ft_putchar(board[1][0]);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		ft_checkmate(argv);
	}
	ft_putchar('\n');
	return (0);
}
