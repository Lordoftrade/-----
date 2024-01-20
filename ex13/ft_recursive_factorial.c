/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:16:48 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/12 12:59:42 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 0 && nb <= 12)
		result = ft_recursive_factorial(nb - 1);
	return (nb * result);
}
/*
int main()
{
	int	i;

	i = ft_recursive_factorial(5);
	printf("%d\n", i);
	return (0);
}*/
