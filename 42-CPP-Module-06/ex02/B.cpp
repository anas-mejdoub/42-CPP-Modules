#include "B.hpp"


B::B() {

}


B::~B() {
    std::cout << "B class destructor" << std::endl;
}


B::B(const B& other) {
    (void )other;
}


B& B::operator=(const B& other) {
    (void )other;
    return *this;
}

