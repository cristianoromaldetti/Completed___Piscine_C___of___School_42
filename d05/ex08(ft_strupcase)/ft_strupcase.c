/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
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


 Create a function that transforms every letter of every word to uppercase.
 Создать функцию, которая преобразует каждую букву каждого слова в верхний регистр.

 It should return str.
 Функция должна вернуть строку.

 
   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


char	*ft_struppcase(char *str)
{	
	char *p;

	p = str;
	while (*p)
	{
		if ((*p >= 'a') && (*p <= 'z'))
			*p = *p - 32;
		p++;
	}
	return (str);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
