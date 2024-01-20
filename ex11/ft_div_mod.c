/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:56:10 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/10 17:03:57 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main()
{
    int a = 10;
    int b = 5;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf("%d, %d", div, mod);
    return (0);
}*/
