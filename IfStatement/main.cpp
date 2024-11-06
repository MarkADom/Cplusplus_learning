#include <iostream>

int main()
{

    int number1{78};
    int number2{60};
    bool result = (number1 < number2); // Expression yielding the condition

    std::cout << std::boolalpha;
    std::cout << "Result : " << result << std::endl;

    if (result == true) // if(result)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }

    if (!result == true) // if(!result)
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    // Using else
    int number3{73};
    int number4{58};

    std::cout << std::endl;
    std::cout << "using the else clause : " << std::endl;
    bool result2 = (number3 < number4); // Expression yielding the condition

    if (result2 == true)
    {
        std::cout << number3 << " is less than " << number4 << std::endl;
    }
    else
    {
        std::cout << number3 << " is NOT less than " << number4 << std::endl;
    }

    // Use expression as condition directly

    std::cout << std::endl;
    std::cout << "Using expression as condition : " << std::endl;

    int number5{79};
    int number6{51};

    if (number5 < number6)
    {
        std::cout << number5 << " is less than " << number6 << std::endl;
    }
    else
    {
        std::cout << number5 << " is NOT less than " << number6 << std::endl;
    }

    // Nesting if statements
    std::cout << std::endl;
    std::cout << "Nesting if statements" << std::endl;

    bool red = false;
    bool green{true};
    bool yellow{false};
    bool police_stop{true};

    // If green : go
    // If red, yellow : stop
    // If green and police_stop : stop

    if (red)
    {
        std::cout << "Stop" << std::endl;
    }
    if (yellow)
    {
        std::cout << "Slow down" << std::endl;
    }
    if (green)
    {
        std::cout << "Go" << std::endl;
    }

    // Less verbose

    std::cout << std::endl;
    std::cout << "Police officer stops(less verbose)" << std::endl;
    if (green && !police_stop)
    {
        std::cout << "Go" << std::endl;
    }
    else
    {
        std::cout << "Stop" << std::endl;
    }

    return 0;
}
