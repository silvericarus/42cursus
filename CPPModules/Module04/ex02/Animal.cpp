/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:22:57 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/20 19:57:22 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    return ;
}

Animal::Animal(Animal const &other)
{
    return ;
}

Animal& Animal::getInstance()
{
    static Animal instance;
    instance.setType("EMPTY");
    std::cout << "an animal has appeared!" << std::endl;
    instance.brain = new Brain();
    return (instance);
}

Animal::~Animal()
{
    std::cout << "the animal disappeared!" << std::endl;
    delete Animal::brain;
}

std::string Animal::getType()
{
    return (this->type);
}

void Animal::setType(std::string str)
{
   this->type = str; 
}

void Animal::makeSound()
{
    std::cout << "the animal made a sound!" << std::endl;
}

std::ostream	&operator<<( std::ostream &ostream, Animal const &animal )
{
    ostream << animal.getType();
    return (ostream);
}

Animal  &operator=(const Animal &animal)
{
    this->setType(animal.getType());
    return(*this);
}
