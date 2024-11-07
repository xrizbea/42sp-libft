/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:25:51 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/07 19:24:25 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
        len++;
	n = -n;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return(len);
}

/* Esta função aloca memória e retorna uma string 'nova' de caracteres
 * terminada com '\0', que é o equivalente em caracteres do inteiro passado
 * como parâmetro. Números negativos também são tratados. Se a alocação falhar,
 * a função retorna NULL. ATENÇÃO: Esta é uma função recursiva. Se você não
 * estiver familiarizado com funções recursivas, uma função recursiva é aquela
 * que chama a si mesma ou está em um ciclo potencial de chamadas de funções. */

char		*ft_itoa(int n)
{
	/* Começamos criando uma variável para a string de caracteres. 
	 * Essa será a string que nossa função vai retornar. Alocamos memória 
	 * para nossa string 'str'. NOTA: Alocamos apenas 2 caracteres, porque 
	 * vamos fazer essa função de forma recursiva e queremos alocar memória 
	 * conforme vamos precisando. Alocamos apenas espaço suficiente para 
	 * armazenar um dígito e o '\0'. Se a alocação falhar, retornamos NULL. 
	 * Também verificamos a possibilidade de o número ser o menor valor possível. 
	 * Caso isso aconteça, retornamos a string correspondente a esse número. */
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	
	/* Verificamos se o número passado é negativo. Se for, colocamos um
	 * sinal de negativo no início da string e chamamos a função recursivamente 
	 * com o valor absoluto de n (ou seja, -n se n for negativo). */
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}

	/* Se o número for maior que 10, queremos quebrá-lo recursivamente
	 * para processar cada dígito individualmente. Para fazer isso, dividimos 
	 * n por 10 e chamamos a função recursivamente com n/10 e n%10. */
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));

	/* Se n for um número de 0 a 9, transformamos o número em um caractere
	 * e colocamos esse caractere na string. */
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
