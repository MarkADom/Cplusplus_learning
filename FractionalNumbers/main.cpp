#include <iostream>
#include <iomanip>

int main()
{

    // Declare and initialize the variables
    float num1{1.12345678901234567890f};       // Precision : 7
    double num2{1.12345678901234567890};       // Precision : 15
    long double num3{1.12345678901234567890L}; // Precision : +15

    // Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(20);                // Control the precision from std::cout
    std::cout << "number1 is : " << num1 << std::endl; // 7 digits
    std::cout << "number2 is : " << num2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << num3 << std::endl; // 15+ digits

    // Float problems : The precision is usually too limited
    // for a lot of
    float num4{192400023.0f}; // Error : narrowing conversion

    std::cout << "number4 is : " << num4 << std::endl;

    // Scientific notation
    // Is very handy if we have really huge numbers or small numbers to represent

    std::cout << "-------------------------" << std::endl;

    double num5{192400023};
    double num6{1.92400023e8};
    double num7{1.924e8}; // Can ommit the lower 00023, for simplicity if your application allows that.
    double num8{0.00000000003498};
    double num9{3.498e-11}; // multiply with 10 exp(-11)

    std::cout << "number5 is : " << num5 << std::endl;
    std::cout << "number6 is : " << num6 << std::endl;
    std::cout << "number7 is : " << num7 << std::endl;
    std::cout << "number8 is : " << num8 << std::endl;
    std::cout << "number9 is : " << num9 << std::endl;

    std::cout << "-------------------------" << std::endl;

    double num10{5.6};
    double num11{}; // Initialized to 0
    double num12{}; // Initialized to 0

    // Infinity
    double result{num10 / num11};

    std::cout << num10 << "/" << num11 << "  yields " << result << std::endl;
    std::cout << result << " + " << num10 << " yields " << result + num10 << std::endl;

    // NaN
    result = num11 / num12;

    std::cout << num11 << "/" << num12 << " = " << result << std::endl;

    return 0;
}
