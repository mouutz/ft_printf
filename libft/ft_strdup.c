/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:21:27 by msahli            #+#    #+#             */
/*   Updated: 2021/02/13 11:22:50 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_s;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!(new_s = malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	while (s1 && *s1)
		new_s[i++] = *s1++;
	new_s[i] = '\0';
	return (new_s);
}
