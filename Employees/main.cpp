#include "Enterprise.h"

int main()
{
	Enterprise Google = Enterprise::getInstance();
	Google.addEmployee("John", "Mathew", "Middle Developer", 4, 80000.50);
	Google.addEmployee("Brad", "Davis", "Senior Developer", 8, 120000.70);
	Google.addEmployee("Ken", "Alan", "Senior Developer", 9, 125000.50);
	Google.addEmployee("Ben", "Larry", "Junior Developer", 1, 50000.50);
	Google.addEmployee("Abraham", "Queen", "Senior Developer", 7, 120000.50);
	Google.addEmployee("Isaak", "Zuckerberg", "Middle Developer", 5, 95000.80);
	Google.addEmployee("Arman", "Suleimenov", "Senior Developer", 10, 130000.70);

	Google.showFilterResults(Google.filterByPosition("Senior Developer"));

	system("pause");
	return 0;
}