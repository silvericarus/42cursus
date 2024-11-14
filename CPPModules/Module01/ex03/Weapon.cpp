/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:46:01 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/21 20:34:08 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon created of type " << type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon of type " << this->type << " destroyed" << std::endl;
}

const std::string&	Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
