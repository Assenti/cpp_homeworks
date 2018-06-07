#include <string>
#include "FlyweightFactory.h"
#include "ConcreteCharacter.h"

int main()
{
	std::string document = "abbdefghijkllllll";

	FlyweightFactory characterFactory(12);

	for (std::string::const_iterator it = document.begin(); it != document.end(); ++it)
	{
		const Character & character = characterFactory.getCharacter(*it);
		std::cout << &it << std::endl; // return the same object (same address)
	}

	system("pause");
	return 0;
}


