/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
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


Create a function that returns 1 if the number given as a parameter is a prime
number, and 0 if it isn’t.
Cоздайте функцию, которая возвращает 1, если число, заданное в качестве параметра,
является простым числом, и 0, если это не так.

Your function must return its result in less than two seconds.
Ваша функция должна вернуть свой результат менее чем за две секунды.


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */



int		ft_is_prime( int nb )
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0) 
			return (0);
		i++;
	}
	return (1);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */