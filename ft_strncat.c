/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 11:13:19 by jcardena          #+#    #+#             */
/*   Updated: 2019/09/24 11:14:26 by jcardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *restrict dst, const char *restrict src, size_t n)
        
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	n = (len_src < n) ? len_src : n;
	while (n--)
	{
		*(dst + len_dst + i) = *(src + i);
		i++;
	}
	*(dst + len_dst + i) = '\0';
	return (dst);
}
