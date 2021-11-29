#include "checkmate.h"

char	**create_board(char **argv, size_t columns, int rows)
{
	char	**res;
	int	i;
	int	j;

	res = (char **) malloc(sizeof(char *) * (rows - 1));
	i = 0;
	while (i < (rows - 1))
	{
		res[i] = (char *) malloc(sizeof(char) * columns);
		i++;
	}
	res[i] = NULL;
	i = 0;
	while (i < (rows - 1))
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
