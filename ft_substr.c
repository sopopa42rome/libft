/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopopa <sopopa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 07:12:24 by sopopa            #+#    #+#             */
/*   Updated: 2022/02/06 07:12:24 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len) // s: stringa dalla quale crerare la sub stringa, start: posizione dalla quale creare la nuova stringa len: lunghezza massima 
{
	void	*ptr;
	size_t	len;
	size_t	index;

	if(!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	if ((size_t)start > len)
		return (ft_strdup(""));
}