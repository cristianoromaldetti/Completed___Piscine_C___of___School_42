/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/05/12 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	команда для компиляции и одновременного запуска                           */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out	   	      */
/* ************************************************************************** */

#include <unistd.h>				/* Подключаем библиотеку содержащую функцию "write" */

/* ************************************************************************** */
void		ft_putchar(char c)/* Функция печати символа */
{
	write(1, &c, 1);
}
/* ************************************************************************** */
void		ft_putstr(char *str)/* Функция печати числа */
{
	while(*str)
		ft_putchar(*str++);
}
/* ************************************************************************** */
void		ft_putnbr(int nb)/* Функция печати числа */
{
	int	temp;
	int	size;

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
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_size(char **tab)
{
	int		i;
	int		j;
	int		size;

	j = 1;
	size = 0;
	while (tab && tab[j])
	{
		i = 0;
		while (tab && tab[j][i])
		{
			i++;
			ft_putnbr(j);
			ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar(' ');
		}	
		size += i + 1;
		ft_putnbr(size);
		ft_putchar('\n');
		j++;
	}
	size += j;
	return (size);
}

char		*ft_join(char **tab, char *sep)
{
	int		i;
	int		k;
	int		s;
	int		size;
	char	*str;

	i = 1;
	k = 0;
	s = 0;
	size = ft_size(tab);
	str = (char*)malloc(sizeof(char) * size + 1);
	while (s < (size - 1) && tab[i])
	{
		k = 0;
		while (tab && tab[i][k])
			str[s++] = tab[i][k++];
		str[s++] = *sep;
		i++;
	}
	str[s] = '\0';
	return (str);
}



int 		main(void)
{
	char	*arr[] = {"Holla", " holla", " holla", "lalaaaa"};
	char	space = '+';
	ft_putstr(ft_join(arr, &space));
	
	ft_putchar('\n');
    return (0);					/* Возвращаем 0 и завершаем программу */
}