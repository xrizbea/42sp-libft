/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:25:51 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/13 15:14:27 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_num_len(int n)

char	*ft_itoa(int n)
{
	unsigned int	len;
	unsigned int	num;
	char			*str;

	num = n;
	len = ft_num_len(n);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}


static int	ft_num_len(int n)
{
	unsigned int	num;
	int				i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i = 1;
		num = -n;
	}
	else
	{
		num = n;
	}
		num /= 10;
		i++;
	}
	return (i);
}
