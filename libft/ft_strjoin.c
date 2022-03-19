/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:21:31 by msahli            #+#    #+#             */
/*   Updated: 2021/02/13 11:22:50 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		*ft_join(char const *s1, char const *s2, char *c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = '\0';
	return (c);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		len;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((!(join = (char*)malloc(sizeof(char) * len + 1))))
		return (NULL);
	join = ft_join(s1, s2, join);
	return (join);
}
