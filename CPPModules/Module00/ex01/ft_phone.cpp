/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phone.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:42:55 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/16 19:42:56 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	std::cout << "Welcome!" << std::endl;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		phonebook.identify_command(command);
	}
	return (0);
}