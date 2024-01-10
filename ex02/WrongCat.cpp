/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:47:26 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/09 19:00:53 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "call constructer form class WrongCat" << std::endl;
}
WrongCat::WrongCat(WrongCat &copy)
{
    this->type = copy.type;
    std::cout << "call copy constructer from WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &copy)
{
    std::cout << "call operator from WrongCat" << std::endl;
    this->type = copy.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "call destructer from claas WrongCat" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "WrongCat miaaaaaaaao" << std::endl;
}

std::string WrongCat::getType() const
{
    std::cout << "call getType from WrongCat" << std::endl;
    return this->type;
}