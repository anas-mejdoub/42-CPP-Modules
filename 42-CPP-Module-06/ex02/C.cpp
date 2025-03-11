#include "C.hpp"


C::C() {

}


C::~C() {
    std::cout << "C class destructor" << std::endl;
}


C::C(const C& other) {
    (void )other;
}


C& C::operator=(const C& other) {
    (void )other;
    return *this;
}

