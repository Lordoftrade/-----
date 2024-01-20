/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:45:12 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/10 16:46:46 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_putchar(char c);
/*{
    write(1, &c, 1);
}*/

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
/*
int main(void)
{
    ft_print_alphabet();
    ft_putchar('\n');

    return (0);
}*/
