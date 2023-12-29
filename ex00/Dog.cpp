/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:26:33 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/29 12:31:54 by ahajji           ###   ########.fr       */
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
void Dog::makeSound() const
{
    std::cout << "cat haaaaaaao" << std::endl;
}