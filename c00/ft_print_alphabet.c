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

// Don't copy the text below in your repository!

int	main(void)
{
	ft_print_alphabet();
}
