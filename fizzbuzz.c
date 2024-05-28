#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i < 10)
			ft_putchar(i + '0');
		else if (i >= 10)
		{
			ft_putchar('0' + i / 10);
			ft_putchar('0' + i % 10);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
