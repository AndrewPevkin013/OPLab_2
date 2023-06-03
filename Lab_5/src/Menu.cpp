#include "Menu.h"
#include "findMinElement.hpp"
#include "Array.hpp"

#include<iostream>

int Menu::start() {

    std::cout << findMinElement<int>(3, 5) << std::endl;
    std::cout << findMinElement<char>('q', 'b') << std::endl;

    Array<int, 5> arr { 3, 4, 6, 7, 5};

    try {
        for (int i = 0; i < arr.size() + 1; i++) {
            std::cout << arr[i] << " ";
        }
    }
    catch (std::exception& w) {
        std::cout << w.what() << std::endl;
    }
    return 0;
}
