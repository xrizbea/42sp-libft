/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:36 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/13 15:13:26 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == 0)
	{
		return ((char *) str + i);
	}
	while (i >= 0)
	{
		if (str[i] == (char) c)
		{
			return ((char *) str + i);
		}
		i--;
	}
	return (NULL);
}
