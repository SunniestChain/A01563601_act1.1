#include <iostream>

#include "sumas.h"


int main() {
    std::cout<< sumas::sumaiterativa(100)<<std::endl; //complejidad O(n)
    std::cout<< sumas::sumarecursiva(100)<<std::endl; //complejidad O(n)
    std::cout<< sumas::sumadirecta(100)<<std::endl; //complejidad O(1)
    std::cout<< sumas::sumaiterativa(200)<<std::endl; //complejidad O(n)


    return 0;
}
