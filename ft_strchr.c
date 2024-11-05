/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:25:50 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/04 13:52:11 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	uns_c;

	uns_c = (unsigned char)c;
	while (*str)
	{
		if (*str == uns_c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (uns_c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
