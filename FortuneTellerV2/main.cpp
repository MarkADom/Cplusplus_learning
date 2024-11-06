#include <iostream>
#include <ctime>

int main()
{

    // srand() has to run once per program run to generate different random numbers every time
    std::srand(std::time(0)); // Seed

    // Declare an array of 12 predictions as character strings
    char predictions[][90]{
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before.",
        ", huum, I don't see anything",
        "you drinking wine"};

    bool end{false}; // Declare a boolean variable to check if the user wants to continue getting predictions or not

    const int max_length{15}; // Declare a constant integer for the maximum length of the user's name input
    char name[max_length]{};  // Declare a character array to store the user's name input

    std::cout << "What's your name dear : " << std::endl;

    std::cin.getline(name, max_length); // Get the user's input with spaces and store it in the 'name' array

    while (!end) // Enter a while loop that will continue until the user inputs 'N' or 'n' to stop getting predictions
    {
        std::cout << "Oh dear " << name << ", I see ";

        // Generate a random number to select a prediction randomly from the 'predictions' array
        size_t rand_num = static_cast<size_t>((std::rand() % std::size(predictions)));
        // Display the selected prediction
        std::cout << predictions[rand_num] << std::endl;

        std::cout << "Do you want me to try again ? (Y | N) : ";

        char go_on;
        std::cin >> go_on; // Get the user's input and store it in the 'go_on' variable

        // If the user inputs 'Y' or 'y', set 'end' to false and continue the while loop.
        // If the user inputs 'N' or 'n', set 'end' to true and terminate the while loop
        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

    return 0;
}
