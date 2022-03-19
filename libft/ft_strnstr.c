/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:22:00 by msahli            #+#    #+#             */
/*   Updated: 2021/02/13 11:22:50 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t max;

	if (*needle == '\0')
		return ((char *)haystack);
	max = ft_strlen(needle);
	while ((*haystack != '\0') && (max <= len))
	{
		if ((*haystack == *needle) && (ft_memcmp(haystack, needle, max) == 0))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
