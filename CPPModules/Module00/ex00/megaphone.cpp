/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:01:13 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/16 19:23:11 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int args, char* argv[]) {
	int	i;

	i = 0;
	if (args != 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return(1);
	}
	else
	{
		while (argv[1][i] != '\0')
			std::cout << (char)toupper(argv[1][i++]);
		return(0);
	}
}
