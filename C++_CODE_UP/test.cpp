/*
 * test.cpp
 *
 *  Created on: Oct 26, 2025
 *      Author: abinaya.s
 */



#include <iostream>

int main() {
#if __cplusplus >= 201703L
    std::cout << "C++17 is enabled!\n" <<std::endl;
#else
    std::cout << "Older C++ standard\n" <<std::endl;;
#endif

    getchar();
}
