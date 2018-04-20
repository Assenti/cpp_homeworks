#include "Point.h"

int main()
{
	Point one(1, 2, 3);
	Point two(4, 5);
	Point three(6);
	
	std::cout << "There are: " << Point::getCounter() << " objects were created."<< std::endl;


	system("pause");
	return 0;
}