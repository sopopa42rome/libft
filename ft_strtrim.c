/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopopa <sopopa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:07:20 by sopopa            #+#    #+#             */
/*   Updated: 2022/02/13 20:55:55 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while ((s1 + start) == ft_strchr(set, s1[start]))
		start++;
	while ((s1 + end - 1) == ft_strrchr(set, s1[end - 1]))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_substr(s1, start, end);
	return (ptr);
}


	
	

// int main(void)
// {
// 	char arr[] = "Sorin!";
// 	printf("%s", ft_strtrim(arr, "or"));
// }
 