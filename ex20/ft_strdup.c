/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:26:38 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/15 19:34:08 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen(src);
	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest != NULL && src != NULL)
		ft_strcpy(dest, src);
	return (dest);
}
/*
int main()
{
	char	*array = "hello";
	char	*dublicate = ft_strdup(array);

	if (dublicate != NULL)
	{
		printf("array: %s\n", array);
		printf("dublicate: %s\n", dublicate);
		free(dublicate);
	}
	else
	{
		fprintf(stderr, "Memory allocation failed\n");
		return EXIT_FAILURE;
		}
		return EXIT_SUCCESS;
}*/
