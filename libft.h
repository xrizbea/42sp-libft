/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:48:58 by beatriza          #+#    #+#             */
/*   Updated: 2024/10/29 18:36:19 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h> // Para size_t

// Funções da biblioteca Libft
int	ft_isalpha(int c);// Verifica se o caractere é alfabético
int	ft_isdigit(int c);// Verifica se o caractere é dígito
int	ft_isprint(int c);// Verifica se o caractere é imprimível
int	ft_isalnum(int c);// Verifica se o caractere é alfanumérico
int	ft_isascii(int c);// Verifica se o caractere é ASCII
int	ft_strlen(const char *str); // Retorna o comprimento da string
int	ft_toupper(int c);// Converte caractere para maiúsculo
int	ft_tolower(int c);// Converte caractere para minúsculo
void	*ft_memset(void *dest, int c, size_t len);
void	ft_bzero(void *b, size_t len);// Preenche um bloco de memória com zeros
void	*ft_memcpy(void *dst, const void *src, size_t len);

#endif
