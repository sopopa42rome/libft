#include <unistd.h>

void	ft_print_alphabet(void)
{
	int c;

	c = 'a';
	while(c <= 'z')
	{
		write(1, &c , 1);
		c++;
	}
}

// Don't copy below!

int	main(void)
{
	ft_print_alphabet();
}
