#include <iostream>
#include <limits>  
#include "Cylinder.h"

int main() {
    double radius, height;

    std::cout << "Vvedite radius tsilindra: ";
    std::cin >> radius;

    if (!std::cin) {
        std::cerr << "Oshibka pri vvedenii radiusa!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }

    if (radius <= 0) {
        std::cerr << "Oshibka: radiys dolzhen byt' polozhitel'nym." << std::endl;
        return 1;
    }

    std::cout << "Vvedite visotu tsilindra: ";
    std::cin >> height;

    if (!std::cin) {
        std::cerr << "Oshibka pri vvedenii vysoty!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }

    if (height <= 0) {
        std::cerr << "Oshibka: vysota dolzhna byt' polozhitel'noy." << std::endl;
        return 1;
    }

    Cylinder cylinder(radius, height);

    std::cout << "Ob'em tsilindra: " << cylinder.volume() << std::endl;
    std::cout << "Ploshad' tsilindra: " << cylinder.surfaceArea() << std::endl;

    std::cout << "Najmi enter dlya vixoda";
    std::cin.get(); 
    std::cin.get(); 

    return 0;
}







