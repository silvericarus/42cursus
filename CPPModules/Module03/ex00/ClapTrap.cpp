/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:32:39 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/28 22:32:39 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_damage = 0;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
	return ;
}

ClapTrap::ClapTrap()
{
	return ;
}

ClapTrap::~ClapTrap()
{
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->_name = claptrap._name;
	this->_hp = claptrap._hp;
	this->_ep = claptrap._ep;
	this->_damage = claptrap._damage;
	return (*this);
}

std::ostream	&operator<<( std::ostream &ostream, ClapTrap const &claptrap )
{
	ostream << claptrap.getName();
	return (ostream);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (this->_hp < amount)
		amount = this->_hp;
	this->_hp -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of health!" << std::endl;
	if (this->_hp + amount < this->_hp)
		amount = ~this->_hp;
	this->_hp += amount;
	return ;
}
