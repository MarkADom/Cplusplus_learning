#include <iostream>

int main()
{

    bool go{true};

    if (int speed{10}; go)
    {
        std::cout << "speed : " << speed << std::endl;

        if (speed > 5)
        {
            std::cout << "Slow down!" << std::endl;
        }
        else
        {
            std::cout << "All good!" << std::endl;
        }
    }
    else
    {
        std::cout << "speed : " << speed << std::endl;
        std::cout << "Stop" << std::endl;
    }

    return 0;
}
