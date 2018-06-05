#include <memory>
#include <iostream>


int main()
{
	std::auto_ptr<int> x(new int(5));
	std::shared_ptr<int> y(new int(6));
	std::unique_ptr<int> z(new int(7));

	std::cout << x.get() << " | " << *x <<  std::endl;


	system("pause");
	return 0;
}