/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 01:07:00 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/17 01:07:00 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	public:
			PhoneBook();
			void	identify_command(std::string command);
			void	add_contact(void);
			void	search_contact(void);
			void	print_contact(int index);
			void	set_command(std::string command, int index);
			std::string	truncate(std::string, size_t width);

	private:
			std::string	_commands[3];
			Contact		_storage[8];
};
#endif
