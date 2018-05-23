#include "Car.h"

void Car::info()
{
	std::cout << "Car is ready" << std::endl;
	std::cout << "Body type: " << type << std::endl;
	std::cout << "Doors opening type: " << opening_type << std::endl;
	std::cout << "Engine's power (h/f): " << power << std::endl;
	std::cout << "Wheels size: " << size << std::endl;
	std::cout << "Color: " << color << std::endl;
	std::cout << "Price: " << price << std::endl;
}

Car::Car(std::string type, std::string opening_type, int power, int size, std::string _color, int _price)
	: Body(type), Doors(opening_type), Engine(power), Wheels(size)
{
	color = _color;
	price = _price;
}


Car::~Car()
{
}
