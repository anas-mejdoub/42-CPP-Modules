#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
Base * generate(void)
{
    A *a = new A();
    return a;
}

void identify(Base* p)
{
    if (dynamic_cast <A*>(p))
    {
        std::cout << "class A" << std::endl;
    }
    else if (dynamic_cast <B*>(p))
    {
        std::cout << "class B" << std::endl;
    }
    else if (dynamic_cast <C*>(p))
    {
        std::cout << "class C" << std::endl;
    }
}
void identify(Base& p)
{
    
    try{
        A &refa = dynamic_cast <A&>(p);
        (void)refa;
        std::cout << "class A" << std::endl;
    }
    catch(...)
    {
        try
        {
            B &refb = dynamic_cast <B&>(p);
            (void)refb;
            std::cout << "class B" << std::endl;
        }
        catch(...)
        {
            try
            {
                C &refc = dynamic_cast <C&>(p);
                (void)refc;
                std::cout << "class C" << std::endl;
            }
            catch(...)
            {
                std::cout << "class not founded" << std::endl;
            }
        }

    }
}

#include <stdio.h>
int main()
{
    Base *p = generate();
    identify(p);

    identify(*p);
    delete p;
    return 0;
}