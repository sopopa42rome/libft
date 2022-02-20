/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopopa <sopopa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:47:43 by sopopa            #+#    #+#             */
/*   Updated: 2022/02/20 23:53:21 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_length_int(unsigned int n)
{
	size_t	len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	unsigned int	a;

	i = check_length_int(-n);
	if (n < 0)
	{
		str = ft_calloc(i + 2, sizeof(*str));
		a = -n;
		while (i > 0)
		{
			str[i] = ((a % 10) + 48);
			a = a / 10;
			i--;
		}
		str[0] = '-';
	}
	else
	{	
		str = ft_calloc(check_length_int(n) + 1, sizeof(*str));
		i = check_length_int(n);
		while (i > 0)
		{
			str[i - 1] = '0' + (n % 10);
			n = n / 10;
			i--;
		}
	}
	return (str);
}

// int main(void)
// {
// 	printf("%s", ft_itoa(0));
// }