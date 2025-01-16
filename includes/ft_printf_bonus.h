/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:56:07 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/16 16:24:03 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define SPECIFIERS 	"cspdiuxX%"
# define FLAGS			"# +"

int		ft_printch(char ch);
int		ft_prints(char *s);
int		ft_printnbr(int num, char *flags);
int		ft_printunbr(unsigned int num);
int		ft_printnbr_hex(unsigned int num, char x, char *flags);
int		ft_printptr(void *ptr);
int		ft_printf(const char *s, ...);
int		ft_check_specifier(char c, va_list arguments, char *flags);
int		ft_printptr_helper(void *ptr);
char	*ft_strchr(const char *s, int c);
void	ft_add_flags(const char *s, char *flags);

#endif