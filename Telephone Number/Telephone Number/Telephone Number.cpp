#include <iostream>
#include <string>
using namespace std;

bool Case() {
	int location_of_8, length;
	string telephone_number;
	cin >> length >> telephone_number;
	location_of_8 = telephone_number.find('8');
	if (location_of_8 != -1 && location_of_8 <= length - 11)
	{
		return true;
	}
	return false;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		cout << ((Case()) ? "YES" : "NO") << endl;
	}
}

