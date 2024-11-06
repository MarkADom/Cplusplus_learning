#include <iostream>

int main()
{

    // Declare and initialize pointer
    int *p_number{}; // will initialize with nullptr
    double *p_fractional_number{};

    // Explicitly initialize with nullptr
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};

    // Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;                                   // 4
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;                             // 8
    std::cout << "sizeof(double*) : " << sizeof(double *) << std::endl;                          // 8
    std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;                                // 8
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;                       // 8
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl; // 8

    // Initializing pointers and assigning them data
    // We know that pointers store addresses of variables
    int int_var{43};
    int *p_int{&int_var}; // The address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;

    // Dereferencing a pointer :
    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer

    return 0;
}
