/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:04:08 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/10 17:05:52 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
	else
		return (0);
}
/*
int main()
{
    int i;
    i = ft_iterative_factorial(0);
    printf("%d\n", i);

    return (0);
}*/
