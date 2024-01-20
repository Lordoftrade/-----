/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <mgreshne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:36:01 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/15 20:10:50 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*result;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	result = (int *)malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
/*
int main ()
{
	int i;
	int min = 112;
	int max = 10;
	i = 0;
    int *result = ft_range(min, max);
    while(i < max - min )
    {
        printf("%d ", result[i]);
        i++;
    }
	return (0);
}*/
