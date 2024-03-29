/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:56:19 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/10 10:18:55 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* attribute;
    public:
        Dog();
        ~Dog();
        Dog(Dog &copy);
        Dog &operator=(Dog &copy);
        void makeSound() const;
        std::string getType() const;
};
#endif