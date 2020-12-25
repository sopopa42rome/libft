#include <unistd.h>
#include <stdio.h>

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
