#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Don't push this text below in your repository!

int	main(void)
{
	ft_putchar('s');
	ft_putchar('\n');
}
