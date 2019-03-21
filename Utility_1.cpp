#include "utility.hpp"

#include <cstdlib>
#include <ctime>

void util::generate_sequence(std::list<int>& container)
{
	srand(time(NULL));
	int size =   (rand() % 20);
	for(int i = 0; i < size; i++)
	{
		int elem =  (rand() % 20);
		container.push_back(elem); 
	}	
}	
