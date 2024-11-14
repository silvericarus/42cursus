/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_char_matrix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:49:23 by manujime          #+#    #+#             */
/*   Updated: 2023/06/06 16:42:30 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//frees all memory of a char ** 
void	ft_free_char_matrix(char **arr)
{
	char	**current;

	if (arr == NULL)
		return ;
	current = arr;
	while (*current)
	{
		free(*current);
		current++;
	}
	free(arr);
}

/*prints a char** to the standard output*/
void	ft_print_char_matrix(char **matrix)
{
	int	c;

	c = 0;
	while (matrix[c])
	{
		ft_printf("%s\n", matrix[c]);
		c++;
	}
}

//returns the length of a char**
int	ft_char_matrix_len(char **matrix)
{
	int	c;

	c = 0;
	while (matrix[c])
		c++;
	return (c);
}
