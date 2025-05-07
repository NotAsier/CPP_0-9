/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:59 by aarranz-          #+#    #+#             */
/*   Updated: 2025/05/05 20:24:10 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    j->makeSound(); 
    i->makeSound(); 

    delete j;
    delete i;

    const int NUM_ANIMALS = 10;
    Animal* animals[NUM_ANIMALS];


    for (int i = 0; i < NUM_ANIMALS / 2; ++i)
    {
        animals[i] = new Dog();
    }
    for (int i = NUM_ANIMALS / 2; i < NUM_ANIMALS; ++i)
    {
        animals[i] = new Cat();
    }


    for (int i = 0; i < NUM_ANIMALS; ++i)
    {
        animals[i]->makeSound();
    }


    Dog originalDog;
    Dog copiedDog = originalDog;


    WrongCat originalCat;
    WrongCat copiedCat = originalCat;


    std::cout << "Original originalDog Brain Address: " << originalDog.getBrainAddress() << std::endl;
    std::cout << "Copied copiedDog Brain Address: " << copiedDog.getBrainAddress() << std::endl;


    std::cout << "Wrong originalCat Brain Address: " << originalCat.getBrainAddress() << std::endl;
    std::cout << "Wrong copiedCat Brain Address: " << copiedCat.getBrainAddress() << std::endl;


    for (int i = 0; i < NUM_ANIMALS; ++i)
    {
        delete animals[i];
    }

    return 0;
}