/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
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

	Файлы для включения: ft_show_tab.c, ft_stock_par.h
	Разрешенные функции: ft_split_whitespaces, ft_show_tab, malloc

   **************************************************************************   

	• Создайте функцию, которая отображает содержимое массива, созданного 
	предыдущей функцией.

	• Вот как это должно быть прототипировано:

								void	ft_show_tab(struct s_stock_par *par);

	• Массив структуры должен быть размещен в своем элементе str и его последний 
	блок должен содержать 0, чтобы указать на конец массива.

	• Структура определяется в файле ft_stock_par.h, как тут:

													typedef struct	s_stock_par
													{
														int size_param;
														char *str;
														char *copy;
														char **tab;
													}				t_stock_par;

	• Для каждого поля мы будем отображать (один элемент на строку):

		◦ аргумент;
		◦ размер аргумента;
		◦ каждое слово аргумента(по одному в строке);


	• Мы проверим вашу функцию с помощью нашего ft_param_to_tab(предыдущее упражнение).
	Примите соответствующие меры, чтобы это работало!


   ************************************************************************** */
/* *******************************_V_1.0_************************************ */
/* ************************************************************************** */


#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

typedef	struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

char				**ft_split_whitespaces(char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				ft_show_tab(struct s_stock_par *par);


#endif


/* ************************************************************************** */
/* *******************************_V_2.0_************************************ */
/* ************************************************************************** */


#ifndef __FT_STOCK_PAR_H
# define __FT_STOCK_PAR_H
# include <stdlib.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

char				**ft_split_whitespaces(char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				ft_print_words_tables(char **tab);
void				ft_show_tab(struct s_stock_par *par);

#endif


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
