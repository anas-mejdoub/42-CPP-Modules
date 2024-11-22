/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:04:40 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 11:23:16 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHAR_H
#define CHAR_H
#include "ICharacter.hpp"


typedef struct s_am
{
    void *adress;
    bool duped;
    struct s_am *next;
}t_am;
t_am *new_node(void *ptr);
void add_back(t_am **l, t_am *new_am);
t_am *last(t_am *l);
class Character : public ICharacter
{
    private :
        std::string _name;
        AMateria *inventory[4];
        t_am *am;
    public :
        Character();
        Character(std::string name);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        Character(const Character& other);
        Character& operator=(const Character& other);
};
#endif