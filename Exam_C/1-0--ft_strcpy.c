/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <RTFM@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************


Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Воспроизведите поведение функции strcpy (man strcpy).


Ваша функция должна быть объявлена ​​следующим образом:

char    *ft_strcpy(char *s1, char *s2);



Сама функция ft_strcpy копирует данные из строки, на которую указывает аргумент s2,
в строку, на которую указывает аргумент s1, пока не встретится символ конца
строки (нулевой символ). Копирование производится вместе с символом конца строки.

Так же функция после копирования возвращает указатель на ту строку, в которую были скопированы данные.

Если строки перекрываются, результат копирования будет не определен.

   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */



char    *ft_strcpy(char *s1, char *s2)	/* Принимаем адреса строк в s1  и адреса s2 */
{
	int		i;			/* обьявляем переменную для счетчика */

	i = 0;				/* инициализируем счетчик для старта с нулевой позиции */
	while (s2[i])		/* цикл будет копировать второй массив в первый пока не дойдет 
						 * до '\0' */
	{
		s1[i] = s2[i];	/* копируем символ из нулевой позиции первой строки в нулевую 
						 * позицию второй строки и дальше по мере увеличения переменной i */
		i++;			/* увеличиваем счетчик для перехода к след ячейке массива */
	}
	s1[i] = '\0';		/* если дошли до сюда значит содержимое массива скопировано и в следующей 
						 * ячейке массива нужно поставить завершающий символ */
	return (s1);		/* Возвращаем адресс строки в которую мы копировали данные */
}


/* ************************************************************************** */
/* ********************************_OR_THAT_:)******************************* */
/* ************************************************************************** */


char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	int l;
	int b;
	char c;

	i = 0;
	b = 1;

	while (b)
	{
		if (s2[i] == '\0')
		{
			b = 0;
			l = i;
		}
		i++;
	}
	
	while (b <= l)
	{
		c = s2[b];
		s1[b] = c;
		b++;
	}
	return (s1);
}
