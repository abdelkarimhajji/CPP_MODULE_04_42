/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:42:52 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/09 18:32:01 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(Cat &copy);
        Cat &operator=(Cat &copy); 
        void makeSound() const;
        std::string getType() const;
};

#endif