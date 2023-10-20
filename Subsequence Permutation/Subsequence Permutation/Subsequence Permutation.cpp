#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int length, differences = 0;
		string characters, sorted_characters;
		cin >> length >> characters;
		sorted_characters = characters;
		sort(sorted_characters.begin(), sorted_characters.end());
		for (int i = 0; i < length; i++)if (characters[i] != sorted_characters[i])differences++;
		cout << differences << endl;
	}
}

