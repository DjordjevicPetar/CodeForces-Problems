#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string characters;
		cin >> characters;
		for (int i = 0; i < characters.size(); i++)
		{
			if (characters[i] == 'a' && i % 2 == 0)cout << "b";
			else if (i % 2 == 0) cout << "a";
			else if (characters[i] == 'z')cout << "y";
			else cout << "z";
		}
		cout << endl;
	}
}

