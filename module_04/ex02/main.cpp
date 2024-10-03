/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:37:06 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/03 11:25:22 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#define SIZE 2

int main()
{
	// Animal Dog;
	Animal* array[SIZE];
	Dog p;
	Dog f(p);
	Cat l;
	Cat g(l);
	for (int i = 0; i < SIZE; i++)
		(i % 2) ? array[i] = new Dog() : array[i] = new Cat();
	for (int i = 0; i < SIZE; i++)
		std::cout << array[i]->getType() << " " << std::endl;
	for (int i = 0; i < SIZE; i++)
		array[i]->makeSound();
		

	g.makeSound();
	f.makeSound();

	for (int i = 0; i < SIZE; i++)
		delete array[i];

	return 0;
}