/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 10:43:10 by jcardena          #+#    #+#             */
/*   Updated: 2019/10/01 10:43:17 by jcardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = NULL;
	if (size)
	{
		ptr = (unsigned char *)malloc(size);
		if (!ptr)
			return (NULL);
		while (size)
			ptr[--size] = 0;
	}
	return ((void *)ptr);
}
