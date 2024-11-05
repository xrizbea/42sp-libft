/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:28:25 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/04 18:00:57 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	result;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	if (i >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (i < (dstsize - 1) && *src)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	result = ft_strlen(dst) + ft_strlen(src);
	return (result);
}
