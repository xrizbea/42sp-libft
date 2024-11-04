/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:28:19 by beatriza          #+#    #+#             */
/*   Updated: 2024/10/29 18:35:39 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*memory_src;
	unsigned char	*memory_dst;
	unsigned int	counter;

	if (src == NULL && dst == NULL)
		return (dst);
	memory_src = (unsigned char *)src;
	memory_dst = (unsigned char *)dst;
	counter = 0;
	while (len > counter)
	{
		memory_dst[counter] = memory_src[counter];
		counter++;
	}
	return (dst);
}
