/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuva-nu <acuva-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:41:28 by acuva-nu          #+#    #+#             */
/*   Updated: 2022/11/19 16:58:55 by acuva-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l)
	{
		res = malloc(sizeof(char));
		if (!res)
			return (NULL);
		*res = '\0';
		return (res);
	}
	if (l < len)
		return (ft_strdup((char *)&s[start]));
	i = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (start < l && i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
