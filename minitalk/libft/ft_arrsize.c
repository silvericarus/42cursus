/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:56:35 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/17 19:48:44 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_arrsize(void *arr)
{
	if (sizeof(arr) == 0)
		return ((size_t)0);
	else
		return ((size_t)sizeof(arr) / sizeof(arr[0]));
}
