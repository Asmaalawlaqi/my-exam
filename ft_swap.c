
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int abc;

	abc = *a;
	*a = *b;
	*b = abc;
}
