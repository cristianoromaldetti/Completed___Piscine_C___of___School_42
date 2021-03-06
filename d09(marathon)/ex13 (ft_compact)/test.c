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


/* 
 * ===-----------------------------------------------------------------------===
 *
 * 
 *	• Напишите функцию ft_compact, которая примет массив параметра char * и 
 *	перезапишет все элементы, которые указывают на 0.
 *	
 *	• Эта функция будет прототипирована следующим образом:
 *										int	ft_compact(char  *tab, int length)
 *	
 *	• Эта функция вернет новый размер массива
 *
 *	• Не уверен, что вы понимаете, что делает эта функция? Она существует в Ruby.
 *
 * 
 * ===-----------------------------------------------------------------------===
 */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

void	ft_putstr_tab(char **argv)
{
	while (*argv)
	{
		ft_putstr(*argv++);
		write(1, "\n", 1);
	}
	
}

int		size_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != ((void *)0))
		i++;
	return (i);
}

int		ft_compact(char **tab, int length)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (length == 0)
	{
		while (tab[i])
		{
			if (tab[i] == ((void *)0))
			{
				k = 0;
				while (tab[i + 1 + k])
				{
					j = 0;
					while (tab[i + 1 + k][j])
					{
						tab[i + k][j] = tab[i + 1 + k][j];
						j++;
					}
					k++;
				}
			}
			i++;
		}
	}
	return (size_tab(tab));
}


int		main(void)
{
	char *arr[] = {"skdjnksd "," skjnskdf"," sds_0 "};
	ft_compact(arr, 3);
	ft_putstr_tab(arr);

    return (0);		
}