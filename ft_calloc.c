/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopopa <sopopa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 04:02:43 by sopopa            #+#    #+#             */
/*   Updated: 2022/03/12 19:29:31 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*ptr;

	if (num_elements == 0 || size == 0)
		return (NULL);
	ptr = malloc(num_elements * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num_elements * size);
	return (ptr);
}
