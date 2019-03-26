#include "utility.hpp"

#include <iostream>
#include <ctime>
 
int main()
{
	srand(time(NULL));
	std::list<int> random_numbers;
  util::generate_sequence(random_numbers);
   
  for(std::list<int>::iterator iter = random_numbers.begin(); iter != random_numbers.end(); iter++)
  {
    std::cout << *iter << std::endl;
  }
return 0;
}