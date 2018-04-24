#include "Store.h"
using namespace std;

int main()
{
	Store meloman = Store::getInstance();
	meloman.addBook("E.Gonsalves", "Java EE 7", "Peter-Trade", 2017, 510);
	meloman.addBook("J.Albahari", "C# 7.0", "O'Reilly", 2017, 600);
	meloman.addBook("M.Auezov", "The path of Abai", "Atameken", 1994, 600);
	meloman.addBook("I.Yessenberlin", "Nomads", "Atameken", 1991, 1000);
	meloman.addBook("B.Jandarbekov", "Saks", "Atameken", 1990, 890);
	meloman.addBook("J.Ostin", "Pride and Prejudice", "Peter-Trade", 1900, 650);

	meloman.showResultsOfFilter(meloman.filterBooksByPublisher("Atameken"));

	system("pause");
	return 0;
}