/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** 


• Create a function that displays a string of characters onscreen. If this string con-
tains characters that aren’t printable, they’ll have to be displayed in the shape of
hexadecimals (lowercase), preceeded by a "backslash".
• Создайте функцию, которая отображает строку символов на экране. Если эта строка 
содержит символы, которые не могут быть напечатаны, они должны отображаться в 
форме шестнадцатеричных символов (нижний регистр), перед которыми стоит «обратный слеш».

• For example :

Coucou\ntu vas bien ?


• The function should display :

Coucou\0atu vas bien ?

   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


void		ft_putchar(char c);


/* ************************************************************************** */


static void	ft_print_hexa(char np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		ft_print_hexa(np / 10);
		ft_print_hexa(np % 10);
	}
	else
		ft_putchar(hex[np]);
}

void		ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i += 1;
	}
}




/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */




void	ft_putchar(char c);

int		is_pr5(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_puthex_digit(char c)
{
	if (c < 10)
	{
		ft_putchar('0' + c);
		return ;
	}
	else
	{
		ft_putchar('a' - 10 + c);
	}
}

void	putchar_non_printable(char c)
{
	int n;

	if (is_pr5(c))
		ft_putchar(c);
	else
	{
		if (c < 0)
			n = c + 256;
		else
			n = c;
		ft_putchar('\\');
		ft_puthex_digit(n / 16);
		ft_puthex_digit(n % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
		putchar_non_printable(*(str++));
}