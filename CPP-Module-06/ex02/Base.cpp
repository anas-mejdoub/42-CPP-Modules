#include "Base.hpp"


Base::Base() {

}


Base::~Base() {
    std::cout << "base class destructor" << std::endl;
}


Base::Base(const Base& other) {
    (void )other;
}


Base& Base::operator=(const Base& other) {
    (void )other;
    return *this;
}

