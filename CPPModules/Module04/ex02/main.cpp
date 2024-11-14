/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:33:36 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/18 19:49:23 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Cat *cat = new Cat();
    Dog *dog = new Dog();
    dog->brain->setIdea(21, "A random idea in a dog head!!!!!!!!!");
    cat->brain->setIdea(42, "A random idea in a cat head!!!!!!!!!");
    std::cout << cat->brain->getIdea(42) << std::endl;
    std::cout << dog->brain->getIdea(21) << std::endl;
    return 0;
}