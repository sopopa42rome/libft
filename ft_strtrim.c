/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopopa <sopopa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:07:20 by sopopa            #+#    #+#             */
/*   Updated: 2022/02/08 19:41:57 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1)
		return (NULL);
	ptr = (char *)(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != set[j])
	{	
		 (s1[i] == set[j])
		{
			j++;
		}
		ptr[k] = s1[i];
		k++;
		i++;
	}
	return (ptr);
}

int main(void)
{
	char arr[] = "Sorin!";
	printf("%s", ft_strtrim(arr, "!"));

}