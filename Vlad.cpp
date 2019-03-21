#include "utility.hpp"
#include <iostream>

 
int main(int argc, char* argv[])
{
    std::list<int> random_numbers;
    util::generate_sequence(random_numbers);
    //auto a = 5;
    for(std::list<int>::iterator iter = random_numbers.begin(); iter != random_numbers.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }
    system("pause>null");
    return 0;
}