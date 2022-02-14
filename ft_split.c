/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopopa <sopopa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:59:21 by sopopa            #+#    #+#             */
/*   Updated: 2022/02/14 14:56:00 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	int		x;
	int		y;
	int		index;
	
	x = 0;
	y = 0;
	index = 0;
	if (!s || (!(table = malloc(sizeof(char) * ft_count_words(s, c) + 1)
		return (NULL);
	while (s[x])
	{
		if (s[x] != c)
			x++;
	}
	

}

int main(void)
{
	char arr[] = "  1 2 3 4 4 5 6 7 7 8 8 9       ";
	printf("%zu", ft_count_words(arr, ' '));
}