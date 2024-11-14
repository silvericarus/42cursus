/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:04:55 by manujime          #+#    #+#             */
/*   Updated: 2023/06/14 00:00:52 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//counts the number of pipes in the input linked list
int	ft_count_pipes(t_input *list)
{
	int		count;
	t_input	*tmp;

	tmp = list;
	count = 0;
	while (tmp)
	{
		if (tmp->type == 7)
			count++;
		tmp = tmp->next;
	}
	return (count);
}

char	**ft_split_join(t_input *current)
{
	char	*str;
	char	**tmp;

	str = ft_full_join(current);
	tmp = ft_split(str, ' ');
	free(str);
	return (tmp);
}

//executes all the commands in the input linked list
//joins the content of all nodes until it finds a pipe
//then it splits the content of the node and executes the command
//if the command is a builtin, it executes it
//if the command is an executable, it executes it
void	ft_pipeline(t_data *data, int pipecount)
{
	int	pipefd[2];
	int	inputfd;
	int	c;

	c = 0;
	inputfd = STDIN_FILENO;
	data->current = data->list;
	while (c <= pipecount && data->current)
	{
		if (pipe(pipefd) == -1)
			perror("pipe");
		data->input = ft_split_join(data->current);
		if (c == pipecount)
			ft_command(data, inputfd, STDOUT_FILENO, c);
		else
			ft_command(data, inputfd, pipefd[1], c);
		close(pipefd[1]);
		inputfd = pipefd[0];
		ft_free_char_matrix(data->input);
		while (data->current && data->current->type != 7)
			data->current = data->current->next;
		if (data->current && data->current->type == 7)
			data->current = data->current->next;
		c++;
	}
}

//redirects the input and output of the command to the pipe
//if the input or output is not the default, it closes the file descriptor
//and duplicates the pipe file descriptor to the input or output file descriptor
//if the input or output is the default, it does nothing
void	ft_redirect_in_out(int inputfd, int outputfd, t_data *data)
{
	if (data->redir_err == 1)
		ft_clean_exit(1, data);
	if (inputfd != STDIN_FILENO)
	{
		dup2(inputfd, STDIN_FILENO);
		close(inputfd);
	}
	if (outputfd != STDOUT_FILENO)
	{
		dup2(outputfd, STDOUT_FILENO);
		close(outputfd);
	}
}
