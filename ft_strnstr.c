/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:27:48 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/04 13:27:54 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (!(*s2))
		return ((char *) s1);
	while (i <= len && len >= 0 && s1[i] != '\0')
	{
		if (i + ft_strlen(s2) > len)
			return (NULL);
		if (s1[i] == s2[0])
			if (ft_strncmp(&s1[i], &s2[0], ft_strlen(s2)) == 0
				&& (ft_strlen(s2) + i) <= len)
				return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
