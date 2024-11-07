/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:04:30 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/11/07 15:59:01 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *file)
{
	int		fd;
	char	buffer[1];
	char	re;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	re = read(fd, buffer, 1);
	while (re > 0)
	{
		write(1, buffer, 1);
		re = read(fd, buffer, 1);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else
		ft_display_file(av[1]);
	return (0);
}
