#include "checkmate.h"

void	ft_putstr(char *s)
{
	size_t i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}
