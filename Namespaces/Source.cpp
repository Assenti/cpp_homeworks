#include <iostream>
#include <string>

namespace my
{
	using std::cout;
	using std::endl;

	int pow(int x, int y)
	{
		int res = 1;
		for (int i = 0; i < y; i++)
		{
			res *= x;
		}
		return res;
	}

	class Student {
	private:
		std::string name;
		int age;
	public:
		Student(std::string name, int age) {
			this->name = name;
			this->age = age;
		}
		std::string getName() {
			return name;
		}
		int getAge() {
			return age;
		}
		void info() {
			cout << name << ' ' << age << endl;
		}
		~Student() {}
	};
}


using std::cout;
using std::endl;

int main()
{
	cout << my::pow(5, 3) << endl;



	system("pause");
	return 0;
}