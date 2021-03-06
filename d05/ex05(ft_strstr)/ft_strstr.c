/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* - Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую */

/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************


 Reproduce the behavior of the function strstr (man strstr).
 Воспроизвести поведение функции strstr (man strstr).


 ******************************************************************************


Аргументы:

str – указатель на строку, в которой ведется поиск.
to_find – указатель на искомую строку.

Описание:

Функция strstr ищет первое вхождение строки (за исключением признак конца строки), 
на которую указывает аргумент to_find, в строку , на которую указывает аргумент str. 
Если строка to_find имеет нулевую длину, то функция вернет указатель на начало строки str


К примеру: в строке «0123456789», с помощью функции ft_strstr, ищется первое вхождение
строки: «345». Эта функця ищет нужную строку. и возвращает адрес эдемента с 
которого начинаеться искомая строка если символы идентичны. 


   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return ((void *)0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == '\0')
		return (str);
	while (*str)
	{
		if (*str == *b)
		{
			a = str;
			while (*a == *b || *b == '\0')
			{
				if (*b == '\0')
					return (str);
				a++;
				b++;
			}
			b = to_find;
		}
		str++;
	}
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		y;
	char	*occurrence;

	occurrence = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			occurrence = str + i;
			y = 0;
			while (str[i + y] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (occurrence);
				y++;
			}
			occurrence = 0;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
