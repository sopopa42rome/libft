#include <unistd.h>

void	ft_print_numbers(void)
{
	int index;

	index = '0';
	while(index <= '9')
		{
			write(1, &index, 1);
			index++;
		}
}

//Don't copy this text below in your repository!

int	main(void)
{
	ft_print_numbers();
}

