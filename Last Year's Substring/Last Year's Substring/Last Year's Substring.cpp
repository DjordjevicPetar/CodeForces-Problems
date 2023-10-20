#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int test_cases, length;
	string number, reversed;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> length >> number;
		reversed = number.substr(length - 4, 4);
		number = number.substr(0, 4);
		reverse(reversed.begin(), reversed.end());
		if (number.find("2020") == 0 || reversed.find("0202") == 0)cout << "YES";
		else if (number.find("2") == 0 && reversed.find("020") == 0)cout << "YES";
		else if (number.find("20") == 0 && reversed.find("02") == 0)cout << "YES";
		else if (number.find("202") == 0 && reversed.find("0") == 0)cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

