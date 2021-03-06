/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
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

• Create a function ft_range which returns an array of integers. This int array should
contain all values between min and max.
• Min included - max excluded.
• Here’s how it should be prototyped :
• If minv́alue is greater or equal to max’s value, a null pointer should be returned.


• Создайте функцию ft_range, которая возвращает массив целых чисел. Этот массив 
  int должен содержат все значения, которые находятся в диапазоне от min до max.
• min значение тоже должно быть в этом массиве, а max значение исключено.
• Оно должно быть прототипировано вот так:		int	*ft_range(int min, int max);
• Если значение min больше или равно значению max, должен быть возвращен нулевой
  указатель.

   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return ((void *)0);
	if ((tab = (int *)malloc(sizeof(int) * (max - min))) == ((void *)0))
		return ((void *)0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}





/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */


int		*ft_range(int min, int max)
{
	int *t;
	int m;

	if (min >= max)
		return (NULL);
	m = max - min - 1;
	if ((t = (int *)malloc(sizeof(int) * m)) == NULL)
		return (NULL);
	m++;
	while (m > min)
		t[m--] = m;
	return (t);
}



/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */


int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	i = min;
	range = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[min - i] = min;
		min++;
	}
	return (range);
}


/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */


int		*ft_range(int min, int max)
{
	int	*ret;
	int count;
	int i;

	if (min >= max)
	{
		ret = 0;
		return (ret);
	}
	else
	{
		count = max - min;
		ret = (int*)malloc(sizeof(*ret) * count);
		i = 0;
		while (min < max)
		{
			ret[i] = min;
			min++;
			i++;
		}
	}
	return (ret);
}


/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */


int		*ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (max < min || !(arr = (int *)malloc(sizeof(int) * (max - min) + 1)))
		return (0);
	while (min <= max)
		arr[i++] = min++;
	return (arr);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

