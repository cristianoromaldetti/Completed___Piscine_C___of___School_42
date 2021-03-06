/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
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
 *
 * 
 *	• Напишите функцию ft_max, которая будет возвращать значение самого большого
 	элемента массива

 * 
 *	• Эта функция будет прототипирована следующим образом:
 * 									int	ft_max(int *tab, int length)
 * 
 * 
 * 
 * ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int	ft_max(int *tab, int length)
{
	int	max;
	int i;

	i = 0;
	max = tab[i];
	while(i < length)
	{
		if(max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_max(int *tab, int length)
{
	int		i;
	int		max;

	i = -1;
	max = 0;
	while (++i < length)
		if (max > tab[i])
			max = tab[i];
	return (max);
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
