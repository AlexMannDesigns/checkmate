#include "checkmate.h"

t_point	find_king(char **board)
{
	t_point temp;
	size_t	i;
	size_t	j;
	
	i = 0;
	while (board[i] != NULL)
	{
		j = 0;
		while (board[i][j] != '\0')
		{
			if (board[i][j] == 'K')
			{
				temp.row = i;
				temp.col = j;
				return (temp);
			}
			j++;
		}
		i++;
	}
	temp.row = 0;
	temp.col = 0;
	return (temp);
}
