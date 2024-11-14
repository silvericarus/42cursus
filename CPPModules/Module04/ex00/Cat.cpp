/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:19:07 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/19 21:21:54 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    Animal::setType("CAT");
    std::cout << "a cat appeared!" << std::endl;
    return ;
}

Cat::Cat(Cat const &other) : Animal(&other)
{
    this->setType(other->getType());
    std::cout << "a cat appeared!" << std::endl;
    return ;
}

Cat::~Cat()
{
    std::cout << "the cat disappeared!" << std::endl;
}

std::string Cat::getType()
{
    return Animal::getType();
}

void    Cat::setType(std::string str)
{
    Animal::setType(str);
}

void    Cat::makeSound()
{
    std::cout << "the cat made a sound, meow!" << std::endl;
}

std::ostream	&operator<<( std::ostream &ostream, Cat const &cat )
{
    ostream << cat->getType();
    return (ostream);
}

Cat  &operator=(const Cat &cat)
{
    this->setType(cat.getType());
    return(*this);
}
