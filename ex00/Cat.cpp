/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:47:26 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/29 12:31:44 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "call constructer form class Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "call destructer from claas Cat" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "cat miaaaaaaaao" << std::endl;
}
