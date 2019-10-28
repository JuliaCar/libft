/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:08:06 by jcardena          #+#    #+#             */
/*   Updated: 2019/10/15 11:17:03 by jcardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen((char*)s);
	if (j > 0)
		j--;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (j >= 0 && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
		j--;
	if (i <= j)
		str = (char *)malloc(sizeof(char) * (j - i + 2));
	else
		str = (char *)malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	k = 0;
	while (s[i] && i <= j)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
