/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:38:34 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/26 23:38:34 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	complaints["debug"] = &Harl::debug;
	complaints["info"] = &Harl::info;
	complaints["warning"] = &Harl::warning;
	complaints["error"] = &Harl::error;
	std::cout << "Harl is here" << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "Harl is gone" << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::map<std::string, ComplaintFunction>::iterator it = complaints.find(level);
	if (it != complaints.end())
	{
		(this->*(it->second))();
	}
	else
		std::cout << "Harl doesn't understand" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}