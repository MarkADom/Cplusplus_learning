#include <iostream>
#include <string>

int main()
{
    /*
    int age;
    std::string name;

    // Print data
    std::cout << "Enter your name : " << std::endl;
    std::cin >> name;

    std::cout << "Enter your age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old " << std::endl;

    std::cout << "Enter your name and age, separated by spaces : " << std::endl;

    std::cin >> name >> age;

    std::cout << "Hello " << name << "! Your age " << age << " years old." << std::endl;
    */

    // Input data with spaces

    std::string full_name;
    int age3;

    std::cout << "Enter your full name and age " << std::endl;

    std::getline(std::cin, full_name);

    std::cin >> age3;

    std::cout << "Hello " << full_name
              << "! Your age " << age3 << " years old." << std::endl;

    return 0;
}