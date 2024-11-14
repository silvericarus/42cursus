/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:29:20 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/20 23:29:20 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str;
	std::string*	ptr;
	std::string&	ref = str;

	str = "HI THIS IS BRAIN";
	ptr = &str;
	std::cout << "Pointer Address: " << ptr << std::endl;
	std::cout << "Reference Address: " << &ref << std::endl;
	std::cout << "String Address: " << &str << std::endl;
	std::cout << "Pointer Value: " << *ptr << std::endl;
	std::cout << "Reference Value: " << ref << std::endl;
	std::cout << "String Value: " << str << std::endl;
	return (0);
}