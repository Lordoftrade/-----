/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:25:11 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/18 19:26:35 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
    }

    if (n < 0)
	{
        ft_putchar('-');
        n = -n;
    }

    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while (length--)
		f(*tab++);
}
/*
int main()
{
	int num[] = {10, 20, 30, 40, 50, 60, 70, 80 , 90, 100};
	int size = sizeof(num) / sizeof(num[0]);

	ft_foreach(&num, size, &ft_putnbr);
}*/
