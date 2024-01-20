/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:18:29 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/12 12:20:11 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0 || nb > 2147395600)
		return (0);
	while (i < nb / i)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
/*
int main()
{   
    int x;

    x = ft_sqrt(1);
    printf("%d\n", x);
    return (0);
}*/
