#include "A.hpp"


A::A() {

}


A::~A() {
    std::cout << "A class destructor" << std::endl;
}


A::A(const A& other) {
    (void )other;
}


A& A::operator=(const A& other) {
    (void )other;
    return *this;
}

