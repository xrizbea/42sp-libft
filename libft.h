/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:48:58 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/06 19:39:12 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h> // Para size_t

// Funções da biblioteca Libft
int		ft_isalpha(int c);// Verifica se o caractere é alfabético
int		ft_isdigit(int c);// Verifica se o caractere é dígito
int		ft_isprint(int c);// Verifica se o caractere é imprimível
int		ft_isalnum(int c);// Verifica se o caractere é alfanumérico
int		ft_isascii(int c);// Verifica se o caractere é ASCII
int		ft_strlen(const char *str); // Retorna o comprimento da string
int		ft_toupper(int c);// Converte caractere para maiúsculo
int		ft_tolower(int c);// Converte caractere para minúsculo
void	*ft_memset(void *dest, int c, size_t len);
void	ft_bzero(void *b, size_t len);// Preenche um bloco de memória com zeros
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(const char *str, int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);

#endif
