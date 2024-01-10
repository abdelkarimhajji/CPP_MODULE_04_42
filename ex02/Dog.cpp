/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:26:33 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/10 10:42:05 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->attribute = new Brain();
    std::cout << "call constructer of dog" << std::endl;
}

Dog::~Dog()
{
    delete this->attribute;
    std::cout << "call destructer of dog" << std::endl;
}

Dog::Dog(Dog &copy)
{
    this->type = copy.type;
    this->attribute = new Brain();
    *(this->attribute) = *(copy.attribute);
    std::cout << "call copy constructer dog" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "dok haaaaaaao" << std::endl;
}

std::string Dog::getType() const
{
    std::cout << "call get type from dog" << std::endl;
    return this->type;
}
Dog &Dog::operator=(Dog &copy)
{
    std::cout << "call operator from dog" << std::endl;
    this->type = copy.type;
    this->attribute = new Brain();
    *(this->attribute) = *(copy.attribute);
    return *this;
}