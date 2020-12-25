#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

// Don't copy the text below in your repository!

int	main(void)
{
	ft_is_negative(78);
}

