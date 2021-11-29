#include "checkmate.h"

int	ft_checkmate(char **board)
{
	if (board[0][0] == '.')
		return (1);
	else
		return (0);
}

char	**create_board(char **argv, size_t columns, int rows)
{
	char	**res;
	size_t	i;
	size_t	j;

	res = (char **) malloc(sizeof(char *) * rows);
	res[rows] = NULL;
	i = 0;
	while (res[i] != NULL)
	{
		res[i] = (char *) malloc(sizeof(char) * columns);
		i++;
	}
	i = 0;
	while (i + 1 < rows)
	{
		j = 0;
		while (argv[i + 1][j] != '\0')
		{
			res[i][j] = argv[i + 1][j]; 
			j++;
		}
		res[i][j] = '\0';
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	char **board;
	size_t size;

	if (argc != 1)
	{
		size = ft_strlen(argv[1]);
		board = create_board(argv, size, argc);
		if (ft_checkmate(board))
			ft_putstr("Success");
		else
			ft_putstr("Fail");
	}
	free(board);
	ft_putchar('\n');
	return (0);
}
