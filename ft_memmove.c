/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:38:16 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/07 11:38:24 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*pnt_src;
	unsigned char	*pnt_dest;

	pnt_src = (unsigned char *)src;
	pnt_dest = (unsigned char *)dest;
	if (pnt_dest == pnt_src)
		return (dest);
	if (pnt_dest < pnt_src)
	{
		while (len--)
		{
			*pnt_dest++ = *pnt_src++;
		}
	}
	else
	{
		while (len--)
		{
			*(pnt_dest + len) = *(pnt_src + len);
		}
	}
	return (dest);
}
