/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:36 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/04 13:25:11 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((unsigned char) c == '\0')
	{
		return ((char *) &str[i]);
	}
	while (i > 0)
	{
		if (str[i - 1] == (unsigned char) c)
		{
			return ((char *) &str[i - 1]);
		}
			i--;
	}
	return (NULL);
}
