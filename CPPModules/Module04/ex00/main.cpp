/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:33:36 by albgonza          #+#    #+#             */
/*   Updated: 2023/08/03 19:11:39 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    WrongAnimal* meta = new WrongAnimal();
    Dog* j = new Dog();
    WrongCat* k = new WrongCat();
    std::cout << "Dog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << k->getType() << std::endl;
    j->makeSound();
    k->makeSound();
    meta->makeSound();
    return 0;
}