/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:55:07 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/04 13:36:42 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned int	counter;
	unsigned char	*memory;

	counter = 0;
	memory = dest;
	while (len > counter)
	{
		memory[counter] = c;
		counter++;
	}
	return (memory);
}
