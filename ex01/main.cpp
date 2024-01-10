/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:13:05 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/10 13:21:28 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();
    int count = 0;
    while (count < 4)
    {
        delete animals[count];
        count++;
    }
    
    delete j;//should not create a leak
    delete i;
    
    
    return 0;
}
