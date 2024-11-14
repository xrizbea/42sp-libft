/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:19:51 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/14 12:49:34 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*new_str;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[len] = '\0';
	return (new_str);
}
