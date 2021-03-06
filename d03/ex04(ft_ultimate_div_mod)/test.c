/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	команда для компиляции и одновременного запуска                           */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out	   	      */
/* ************************************************************************** */


/* Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую */


#include <unistd.h>

void	ft_putchar(char c)			/* функция вывода символа */
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)     		 /* Функция вывода числа */
{
	int		temp;
	int		size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{	
		ft_putchar('2');
		nb = 147483648;
	}
	temp = nb;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb;
	while (size)
	{
		ft_putchar((char)(temp / size) + '0');
		temp %= size;
		size /= 10;
	}
}
/* #######################################################################*/
/* Эта функция делит параметров а, B и сохраняет результат в переменной типа int,
на который указывает элемент div. Он также хранит остаток деления a на b в int,
указанном элементом mod. */

/* В указатель 'a' и 'b' отправляются адреса делимого и делителя которые будут помогать нам делать обычное деление и деление по модулю */
/* А ДАЛЬШЕ(в ячейки на которые укзывают адреса указателей 'a' и 'b'(они обьявлены в скобках)) БУДЕТ ЗАПИСЫВАТЬСЯ ЧИСЛО ОТ ПРОСТОГО ДЕЛЕНИЯ(в 'a) И ОТ ДЕЛЕНИЯ ПО МОДУЛЮ(в 'b') */


void	ft_ultimate_div_mod(int *a, int *b) /* СЮДА(в указатель 'a' и указатель 'b'(они обьявлены в скобках)) ПРИНИМАЕТСЯ И ЗАПИСЫВАЕТСЯ АДРЕСС ОТПРАВЛЯЕМЫХ ПЕРЕМЕННЫХ, В ЯЧЕЙКИ КОТОРЫХ МЫ ЗАПИШЕМ РЕЗУЛЬТАТЫ */
{
	int	temp;						/* создадим переменню для временного хранения данных которые мы меняем местами */

	temp = *a;						/* с помощью операции разыменовывания(*a) достаем из адреса который хранит указатель 'a' данные и сохраняем их в 'temp' */
	*a = *a / *b;					/* делим число из ячейки на которую указывает указатель 'a' на число из ячейки на которую указывает указатель 'b' и сохраняем результат в ячейку адресс которой хранит указатель 'b' с помощью операции разыменовывания(*b) */
	*b = temp % *b;					/* делим по модулю число из перменнной 'temp' на число из ячейки на которую указывает указатель 'b'  и сохраняем их в ячейку адресс которой хранит указатель 'b' с помощью операции разыменовывания(*b) */
}				

int		main(void)
{
	int		i;			/* обьявляем переменные типа инт, котрые будут хранить числа делимого и делителя И  котрые так же будут хранить результат деления и остаток от деления */
	int		t;


	i = 452;						/* Запишем туда  452 */
	t = 88;							/* Запишем туда  88  */
	ft_ultimate_div_mod(&i, &t);	/* Вызываем функцию и отправляем туда адреса переменных из которых возьмем делимое и делитель И в которые запишем результат деления и остаток от деления */

	/* Сейчас консоль должна вывести результат деления и остаток от деления "5 12" и перейти на сл. строку */ /* если сомневаетесь проверьте на калькуляторе */
	ft_putnbr(i);					/* печатаем результат деления i */
	ft_putchar(' ');				/* Печатаем символ ' ' */
	ft_putnbr(t);					/* печатаем делимое t */
	ft_putchar('\n');				/* печатаем символ переноса строки '\n' */

	return (0);
}