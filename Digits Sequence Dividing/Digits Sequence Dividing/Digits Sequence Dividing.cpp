#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int length, i = 1;
		string number;
		cin >> length >> number;
		if (length == 2 && number[0] >= number[1])cout << "NO" << endl;
		else cout << "YES" << endl << 2 << endl << number.substr(0, 1) << " " << number.substr(1) << endl;
	}
}
