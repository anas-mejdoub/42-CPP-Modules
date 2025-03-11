#ifndef C_HPP
#define C_HPP
#include "Base.hpp"
class Base;
class C : public Base {
    public:
        
        C();

        ~C();

        C(const C& other);

        C& operator=(const C& other);

    private:
};

#endif