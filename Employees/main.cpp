#include "Enterprise.h"

int main()
{
	Enterprise Google = Enterprise::getInstance();
	Google.addEmployee("John", "Mathew", "Middle Developer", 4, 80000.50);
	Google.addEmployee("Brad", "Davis", "Senior Developer", 8, 120000.70);
	Google.addEmployee("Ken", "Alan", "Senior Developer", 9, 125000.50);
	Google.addEmployee("John", "L", "Junior Developer", 1, 50000.50);
	Google.addEmployee("John", "Mathew", "Middle Developer", 4, 80000.50);
	Google.addEmployee("John", "Mathew", "Middle Developer", 4, 80000.50);
	Google.addEmployee("John", "Mathew", "Middle Developer", 4, 80000.50);

	Google.filterByPosition("Senior Developer")

	system("pause");
	return 0;
}