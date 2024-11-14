/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:54:21 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/16 23:54:21 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_field_id[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};

Contact::Contact()
{
	for (int i = 0; i < 5; i++)
		Contact::_field_content[i] = "";
}

Contact::Contact(int fields)
{
	for (int i = 0; i < fields; i++)
		Contact::_field_content[i] = "";
}

void	Contact::print(void)
{
	for (int i = 0; i < 5; i++)
		std::cout << Contact::_field_id[i] << ": " << Contact::_field_content[i] << std::endl;
}

bool	Contact::is_empty(void)
{
	return(Contact::_field_content[0] == "");
}

void	Contact::set_contact()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << Contact::_field_id[i] << ": ";
		std::getline(std::cin, this->Contact::_field_content[i]);
	}
}

std::string	Contact::get_content(int index)
{
	return (Contact::_field_content[index]);
}

