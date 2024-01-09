/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:46:04 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/09 18:58:55 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "call constructer of WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "call destructer of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << "call copy constructer of WrongAnimal" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "print sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    std::cout << "call getType from WrongAnimal" << std::endl;
    return this->type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
    this->type = copy.type;
    std::cout << "call operator= of WrongAnimal" << std::endl;
    return *this;
}
