/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:00:22 by albgonza          #+#    #+#             */
/*   Updated: 2022/09/08 17:28:51 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	transfer_signal(char c, int pid)
{
	int		i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(500);
	}
}

int	main(int args, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (args == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			transfer_signal(argv[2][i], pid);
			i++;
		}
		transfer_signal(argv[2][i], pid);
	}
	return (0);
}
