#include <iostream>
#include <ctime> // Library for generating random numbers using the system clock

int main()
{
    // Initialize the random number generator with the current time
    // srand() has to run once per program run
    std::srand(std::time(0));

    // Declare an array of ten different predictions as character arrays
    char prediction0[]{"a lot of kinds running in the backyard!"};
    char prediction1[]{"a lot of empty beer bootle's on your work table."};
    char prediction2[]{"you Partying too much with kids wearing weird clothes."};
    char prediction3[]{"you running away from something really scary"};
    char prediction4[]{"clouds gathering in the sky and an army standing ready for war"};
    char prediction5[]{"dogs running around in a deserted empty city"};
    char prediction6[]{"a lot of cars stuck in a terrible traffic jam"};
    char prediction7[]{"you sitting in the dark typing lots of lines of code on your dirty computer"};
    char prediction8[]{"you yelling at your boss. And oh no! You get fired!"};
    char prediction9[]{"you laughing your lungs out. I've never seen this before."};

    bool end{false}; // A boolean variable to control program flow

    const int max_length{15}; // Maximum length of user's name
    char name[max_length]{};  // Declare a character array to store the user's name

    // Prompt the user to enter their name and read in the input using getline()
    std::cout << "What's your name dear :" << std::endl;

    std::cin.getline(name, max_length); // Get input with spaces

    // Loop that continues until the user decides to end the program
    while (!end)
    {
        std::cout << "Oh dear " << name << ", I see ";

        // Generate a random number between 0 and 10 (inclusive)
        size_t rand_num = static_cast<size_t>((std::rand() % 11));

        switch (rand_num) // Choose a prediction based on the random number [0~10]
        {
        case 0:
            std::cout << prediction0 << std::endl;
            break;
        case 1:
            std::cout << prediction1 << std::endl;
            break;
        case 2:
            std::cout << prediction2 << std::endl;
            break;
        case 3:
            std::cout << prediction3 << std::endl;
            break;
        case 4:
            std::cout << prediction4 << std::endl;
            break;
        case 5:
            std::cout << prediction5 << std::endl;
            break;
        case 6:
            std::cout << prediction6 << std::endl;
            break;
        case 7:
            std::cout << prediction7 << std::endl;
            break;
        case 8:
            std::cout << prediction8 << std::endl;
            break;
        case 9:
            std::cout << prediction9 << std::endl;
            break;
        default: // In case the random number is out of range
            std::cout << ", humm, I don't see anything" << std::endl;
        }

        // Prompt the user to decide whether to continue or end the program by entering 'Y' or 'N'
        std::cout << "Do you want me to try again ? ( Y | N) : ";

        char go_on;
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

    return 0;
}
