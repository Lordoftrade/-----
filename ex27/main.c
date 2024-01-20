/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:33:49 by mgreshne          #+#    #+#             */
/*   Updated: 2024/01/19 20:37:00 by mgreshne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

int	open_file(char **filename)
{
	int	fd;

	fd = open(filename[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	return (fd);
}

void	display_file_content(int fd)
{
	char	buffer[BUF_SIZE];
	int		bytes_read;

	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write (1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
	if (bytes_read == -1)
		write(1, "Cannot read file.\n", 18);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc == 2)
	{
		fd = open_file(argv);
		if (fd != 0)
		{
			display_file_content(fd);
			close(fd);
		}
	}
	else
		write(1, "Too many arguments.\n", 20);
	return (0);
}
