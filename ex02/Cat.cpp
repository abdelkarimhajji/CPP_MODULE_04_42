/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:47:26 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/10 10:41:32 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->attribute = new Brain();
    std::cout << "call constructer form class Cat" << std::endl;
}
Cat::Cat(Cat &copy)
{
    this->type = copy.type;
    this->attribute = new Brain();
    *(this->attribute) = *(copy.attribute);
    std::cout << "call copy constructer from cat" << std::endl;
}

Cat &Cat::operator=(Cat &copy)
{
    std::cout << "call operator from cat" << std::endl;
    this->type = copy.type;
    this->attribute = new Brain();
    *(this->attribute) = *(copy.attribute);
    return *this;
}

Cat::~Cat()
{
    delete this->attribute;
    std::cout << "call destructer from claas Cat" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "cat miaaaaaaaao" << std::endl;
}

std::string Cat::getType() const
{
    std::cout << "call getType from Cat" << std::endl;
    return this->type;
}