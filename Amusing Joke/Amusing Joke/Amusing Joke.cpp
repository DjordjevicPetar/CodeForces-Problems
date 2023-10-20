#include <iostream>
#include <string>
using namespace std;

void main()
{
	string first, second, letters;
	char c;
	cin >> first >> second;
	getchar();
	letters = first + second;
	while ((c = getchar()) != '\n')
	{
		if (letters.find(c) == string::npos)
		{
			cout << "NO";
			return;
		}
		letters.erase(letters.find(c), 1);
	}
	if (letters.size() == 0)cout << "YES";
	else cout << "NO";
}
