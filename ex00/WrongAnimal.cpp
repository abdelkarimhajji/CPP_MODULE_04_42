/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:46:04 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/09 18:16:50 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "call constructer of Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "call destructer of Animal" << std::endl;
}

Animal::Animal(Animal &copy)
{
    this->type = copy.type;
    std::cout << "call copy constructer of Animal" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "print sound" << std::endl;
}

std::string Animal::getType() const
{
    std::cout << "call getType from animal" << std::endl;
    return this->type;
}

Animal &Animal::operator=(Animal const &copy)
{
    this->type = copy.type;
    std::cout << "call operator= of Animal" << std::endl;
    return *this;
}
