/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:34:22 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/17 19:13:59 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;


	i = ac;
	if (ac > 1)
	{
		while (i > 0)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
