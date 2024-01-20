/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:22:24 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/12 12:23:34 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
int main()
{
    int cmp;
    int stcmp;

    char str1[] = "ba";
    char str2[] = "bb";

    cmp = ft_strcmp(str1, str2);
    stcmp = strcmp(str1, str2);

    printf("%d\n", cmp);
    printf("%d\n", stcmp);
    return (0);
}*/
