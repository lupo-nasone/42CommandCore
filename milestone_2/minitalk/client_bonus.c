/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarbona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:10:30 by ecarbona          #+#    #+#             */
/*   Updated: 2025/01/14 17:06:49 by ecarbona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	put_signal(int pid, char *str)
{
	int	i;
	int	c;

	i = -1;
	while (*str)
	{
		c = *(str);
		while (++i < 8)
		{
			if (c << i & 0b10000000)
			{
				if (kill(pid, SIGUSR1) == -1)
					return ((void)ft_printf("Unable to send Message"));
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					return ((void)ft_printf("Unable to send Message"));
			}
			usleep(100);
		}
		str++;
		i = -1;
	}
}

void	handler(int sig)
{
	static int	message_printed;

	if (!message_printed)
	{
		if (sig == SIGUSR1)
		{
			ft_printf("The signal was received successfully.\n");
			message_printed = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa_sig;

	sa_sig = (struct sigaction){0};
	if (argc == 3)
	{
		sa_sig.sa_handler = &handler;
		sa_sig.sa_flags = SA_SIGINFO;
		sigaction(SIGUSR1, &sa_sig, NULL);
		sigaction(SIGUSR2, &sa_sig, NULL);
		put_signal(ft_atoi(argv[1]), argv[2]);
	}
	else
	{
		ft_printf("Invalid arguments.\nPut PID and messange.\n");
		exit(1);
	}
	return (0);
}
