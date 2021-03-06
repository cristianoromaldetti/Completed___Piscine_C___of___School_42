/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <mcourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 14:34:26 by mcourtia          #+#    #+#             */
/*   Updated: 2015/09/06 17:10:54 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	midline(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	firstlastline(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	rush(int x, int y)
{
	int ix;
	int iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if (iy == 1 || iy == y)
				firstlastline(ix, x);
			else
				midline(ix, x);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
