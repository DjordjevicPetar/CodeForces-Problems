#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number_of_characters, number_of_changes = 0;
	char odd, even;
	string resulting_string = "";
	cin >> number_of_characters;
	getchar();
	for (int i = 0; i < number_of_characters / 2; i++)
	{
		if ((odd = getchar()) == (even = getchar()))
		{
			number_of_changes++;
			resulting_string += "ab";
		}
		else
		{
			resulting_string += {odd, even};
		}
	}
	cout << number_of_changes << endl << resulting_string << endl;
}
