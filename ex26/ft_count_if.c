/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:28:37 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/18 20:32:27 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/*
int ft_uppercase(char *str)
{
	return (str[0] >= 'A' && str[0] <= 'Z');
}*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int main()
{
	char *arr[] = {"H", "B", "a", "G", "c", "e", "H" , NULL};
	int x = 0;
	x = ft_count_if(arr, &ft_uppercase);
	printf("%d", x);
	return (0);
}*/
