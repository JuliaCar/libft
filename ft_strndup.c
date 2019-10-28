/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:54:05 by jcardena          #+#    #+#             */
/*   Updated: 2019/10/28 12:57:57 by jcardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*newstr;
	size_t	strlen;

	strlen = ft_strlen(s1);
	strlen = (len < strlen) ? len : strlen;
	newstr = ((char *)malloc(sizeof(char) * (strlen + 1)));
	if (newstr)
	{
		ft_strncpy(newstr, s1, strlen);
		newstr[strlen] = '\0';
		return (newstr);
	}
	return (NULL);
}
