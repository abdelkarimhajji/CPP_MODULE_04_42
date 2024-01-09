/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:26:33 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/09 18:53:37 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "call constructer of dog" << std::endl;
}

Dog::~Dog()
{
    
}

Dog::Dog(Dog &copy)
{
    this->type = copy.type;
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
    return *this;
}