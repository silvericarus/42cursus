/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:01:53 by albgonza          #+#    #+#             */
/*   Updated: 2022/09/08 18:37:55 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_arr_of_bits(char *c_tmp, siginfo_t *info)
{
	int		index;
	char	tmp;

	index = 7;
	tmp = '\0';
	while (index >= 0)
	{
		if (*c_tmp == '1')
			tmp = tmp + (1 << index);
		else
			tmp = tmp + (0 << index);
		index--;
		c_tmp++;
	}
	if (tmp == '\0')
	{
		write(1, "\n", 1);
		kill(info->si_pid, SIGUSR1);
	}
	else
		write(1, &tmp, 1);
}

static void	detect_signal(int octet, siginfo_t *info, void *uap)
{
	static int	i = 0;
	static char	c_tmp[8];

	uap = NULL;
	if (octet == SIGUSR1)
	{
		c_tmp[i] = '1';
		i++;
	}
	else if (octet == SIGUSR2)
	{
		c_tmp[i] = '0';
		i++;
	}
	if (i == 8)
	{
		print_arr_of_bits(c_tmp, info);
		ft_bzero(c_tmp, 8);
		i = 0;
	}
}

int	main(int args, char **argv)
{
	struct sigaction	sa;

	ft_printf("%s\n", argv[0]);
	if (args == 1)
	{
		ft_printf("Server PID: %d\n", getpid());
		sa.sa_sigaction = &detect_signal;
		sa.sa_flags = SA_SIGINFO;
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		while (1)
			pause();
	}
	return (0);
}
