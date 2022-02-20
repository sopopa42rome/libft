/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopopa <sopopa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:47:43 by sopopa            #+#    #+#             */
/*   Updated: 2022/02/20 05:49:46 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_length_int(int n)
{
	size_t	len;

	len = 0;
	while (n > 0)
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

	if (n < 0)
	{
		n *= -1;
		str = ft_calloc(check_length_int(n), 1);
		i = check_length_int(n);
		while (n > 0)
		{
			str[i] ='0' + (n % 10);
			n = n / 10;
			i++;
		}
		str[0] = '-';
	}
	else
	{
		str = ft_calloc(check_length_int(n), 1);
		if (n == 0)
			str[0] = '0';
		i = check_length_int(n);
		while (n != 0)
		{
			str[i] = '0' + (n % 10);
			n = n / 10;
			i--;
		}
	}
	return (str);
}

int main(void)
{
	printf("%c", *ft_itoa(-99));
}