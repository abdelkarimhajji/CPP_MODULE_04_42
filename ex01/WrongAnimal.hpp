/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:35:08 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/09 19:04:14 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal &copy);
        WrongAnimal &operator=(WrongAnimal const &copy);
        void makeSound() const;
        std::string getType() const;
};
#endif