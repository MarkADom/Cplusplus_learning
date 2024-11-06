#include <iostream>
#include <iomanip>

int main()
{

    // Setw on numbers before you print them
    const size_t ROWS{12};
    const size_t COLS{3};

    std::cout << "Tabular data visualization with nested for loops : " << std::endl;

    for (size_t row{0}; row < ROWS; ++row)
    {

        for (size_t col{0}; col < COLS; ++col)
        {
            std::cout << "( row " << std::setw(2) << row << ",col " << std::setw(2) << col << ")  ";
        }
        std::cout << std::endl;
    }
    /*
    // While Loop

    std::cout << std::endl;
    std::cout << "Tabular data visualization with nested while loops : " << std::endl;

    // Remember to reset col to 0 after the inner loop is done for the next row to use the right columns.

    size_t row{0};
    size_t col{0};

    while (row < ROWS)
    {
        std::cout << "(row " << std::setw(2) << row << ",col " << std::setw(2) << col << ") ";
        ++col;
    }

    std::cout << std::endl;
    col = 0; // Reset col to 0 to allow printing from col 0 . col is in main
    // function local scope now.
    ++row;

    // Reset col to 0 to allow printing from col 0 . col is in main function local scope now.

    size_t row = 0;
    size_t col = 0;

    do
    {
        std::cout << "( row" << std::setw(2) << row << ",col " << std::setw(2) << col << ")  ";
        ++col;
    } while (col < COLS);
    */
    return 0;
}
