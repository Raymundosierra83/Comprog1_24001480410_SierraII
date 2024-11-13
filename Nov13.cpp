#include <iostream>
#include <string>

int main() {

    std::cout << "Hello, I am Raymundocute!! Welcome to my C++ application." << std::endl;
    
    std::cout << "Hey! What is your name?" << std::endl;
    std::string name;
    
    std::getline(std::cin, name);
    
    std::cout << "Good Day " << name << "! It's nice to meet you!" << std::endl;

    std::cout << "When is your birthday? " << std::endl;
    
    int day, month, year;
   
    std::cout << "Enter the day: ";
    std::cin >> day;
    
    std::cout << "Enter your month: ";
    std::cin >> month;
    
    std::cout << "Enter your year: ";
    std::cin >> year;
    
    std::cout << "Your birthday is: " << day << "/" << month << "/" << year << std::endl;
    
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year!" << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
    
    return 0;
}



