#include <iostream>
#include <string>
using namespace std;

int main()
{
	string number;
	cin >> number;
	int index_of_comma = number.find('.');
	cout << ((number[index_of_comma - 1] == '9') ? "GOTO Vasilisa.":
		(number[index_of_comma + 1] < '5') ? number.substr(0, index_of_comma) :
		number.substr(0, index_of_comma - 1) + (char)(number[index_of_comma - 1] + 1));
}