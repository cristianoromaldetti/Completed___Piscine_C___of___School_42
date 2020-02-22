/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   команда для компиляции и одновременного запуска                          */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out           */
/* ************************************************************************** */


#include <unistd.h>

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

void	ft_putchar(char c)			/* функция вывода символа */
{
	write(1, &c, 1);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)	/* Принимаем адреса строк в s1  и адреса s2 */
{
	int i;									/* обьявляем переменную для счетчика */

	i = 0;									/* инициализируем счетчик для старта с нулевой позиции */
	while(src[i])							/* цикл будет копировать второй массив в первый пока не дойдет до '\0' */
	{
		dest[i] = src[i];					/* копируем символ из нулевой позиции первой строки в нулевую 
											 * позицию второй строки и дальше по мере увеличения переменной i */
		i++;								/* увеличиваем счетчик для перехода к след ячейке массива */
	}
	dest[i] = src[i];						/* если дошли до сюда значит содержимое массива скопировано и в следующей 
											 * ячейке массива нужно поставить завершающий символ */
	return (dest);							/* Возвращаем адресс строки в которую мы копировали данные */
}

int 	main(void)
{
	char	r[] = {"Fuck"};
	char	t[7];
	char	*p;


	p = ft_strcpy(t, r);

	ft_putstr(p);
	return (0);
}
