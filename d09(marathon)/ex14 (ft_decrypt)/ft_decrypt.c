/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * ===-----------------------------------------------------------------------===
 *
 *	  • Написать функцию "ft_decrypt". Эта функция примет строку символов в 
 *	качестве параметра и разделит ее на массив структуры "t_perso". Массив будет 
 *  разделен 0.
 * 
 *	  • Эта функция будет прототипирована следующим образом:
 *											t_perso		**ft_decrypt(char *str)
 *
 *	  • Строка, переданная в качестве параметра, будет отформатирована следующим 
 *	образом:
 * 											Age|Name;Age2|Name2;Age3|Name3
 *	
 *	• Структура "t_perso" должна сказать вам что-то! Неуказанные поля не будут 
 *	инициализированы. Подумайте о том, чтобы включить "ft_perso.н "в свой".с"!
 *
 * ===-----------------------------------------------------------------------===
 */

#include <stdlib.h>
#include "ft_perso.h"

int		ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '|' || c == ';');
}

int			ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (*str && !(ft_isspace(*str++)))
	{
		i++;
	}
	return (i);
}

char		*ft_get_name(char *str)
{	int	j;
	char	*name;

	j = 0;
	while(*str && (ft_isspace(*str) || (*str >= '0' && *str <= '9')))
		str++;
	name = (char *)malloc(sizeof(char) * ft_wordlen(str) + 1);
	while (*str && !(ft_isspace(*str)) && ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		name[j++] = *str++;
	name[j] = '\0';
	return (name);
}

int			ft_get_age(char *str)
{
	int age;

	age = 0;
	while (*str >= '0' && *str <= '9')
		age = (age * 10) + (*str++ - '0');
	return (age);
}


t_perso		**ft_decrypt(char *str)
{
	t_perso	**tab;
	int		numstructs;
	int		j;
	
	numstructs = 0;
	j = 0;
	while (str[j])
	{
		while (str && str[j++] == '|')
			numstructs++;
	}
	if (numstructs > 0)
	{
		j = 0;
		if ((tab = (t_perso **)malloc(sizeof(t_perso *) * (numstructs + 1))) == ((void *)0))
			return ((void *)0);
		while (j < numstructs)
		{
			if ((*(tab + j) = (t_perso *)malloc(sizeof(t_perso))) == ((void *)0))
				return ((void *)0);
			while(*str && (ft_isspace(*str) || !(*str >= '0' && *str <= '9')))
				str++;
			(*(tab + j))->age = ft_get_age(str);
			while(*str && (ft_isspace(*str) || (*str >= '0' && *str <= '9')))
				str++;

			(*(tab + j))->name = ft_get_name(str);
			j++;
			str++;
		}
		return (tab);
	}
	return ((void *)0);
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */



t_perso		**ft_decrypt(char *str)
{
	t_perso		**some_people;
	int			index;
	int			nb_people;
	int			i;

	nb_people = ft_nb_of_people(str);
	some_people = malloc((nb_people + 1) * sizeof(*some_people));
	i = 0;
	index = 0;
	while (i < nb_people)
	{
		some_people[i] = malloc(sizeof(t_perso));
		some_people[i]->age = ft_get_age(str, &index);
		some_people[i]->name = ft_get_name(str, &index);
		i++;
	}
	some_people[i] = NULL;
	return (some_people);
}

int			ft_nb_of_people(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '|')
			count++;
		i++;
	}
	return (count);
}

int			ft_get_age(char *str, int *index)
{
	int i;
	int age;

	i = *index;
	age = 0;
	while (str[i] != '\0' && str[i] != '|')
	{
		age = age * 10 + str[i] - '0';
		i++;
	}
	*index = i;
	return (age);
}

char		*ft_get_name(char *str, int *index)
{
	int		i;
	int		len_name;
	char	*name;

	i = *index + 1;
	len_name = 0;
	while (str[i] != '\0' && str[i] != ';')
	{
		len_name++;
		i++;
	}
	name = malloc((len_name + 1) * sizeof(char));
	i = *index + 1;
	while (str[i] != '\0' && str[i] != ';')
	{
		name[i] = str[i];
		i++;
	}
	name[i] = '\0';
	return (name);
}