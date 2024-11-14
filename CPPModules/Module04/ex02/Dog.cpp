/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:46:32 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/20 20:05:25 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    Animal& instance = Animal::getInstance();
    instance.setType("DOG");
    std::cout << "a dog appeared!" << std::endl;
    Dog::brain = new Brain();
    return ;
}

Dog::Dog(Dog const &other)
{
    Animal& instance = Animal::getInstance();
    instance.setType(other->getType());
    std::cout << "a dog appeared!" << std::endl;
    Dog::brain = other->brain;
    return ;
}

Dog::~Dog()
{
    std::cout << "the dog disappeared!" << std::endl;
    delete Dog::brain;
}

std::string Dog::getType()
{
    return Animal::getType();
}

void    Dog::setType(std::string str)
{
    Animal::setType(str);
}

void    Dog::makeSound()
{
    std::cout << "the dog made a sound, woof!" << std::endl;
}

std::ostream	&operator<<( std::ostream &ostream, Dog const &dog )
{
    ostream << dog->getType();
    return (ostream);
}

Dog  &operator=(const Dog &dog)
{
    this->setType(dog.getType());
    return(*this);
}
