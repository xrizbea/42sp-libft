/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:56 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/04 13:17:04 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
	{
		return (src_len);
	}
	else
	{
		while (i <= (size - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (i == size)
		i--;
	dst[i] = '\0';
	return (src_len);
}
