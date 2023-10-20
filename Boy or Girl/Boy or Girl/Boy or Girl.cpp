#include <iostream>
#include <string>
using namespace std;

int main()
{
	string distinct_letters;
	char character;
	while ((character = getchar()) != '\n')
	{
		if (distinct_letters.find(character) == string::npos)
		{
			distinct_letters.push_back(character);
		}
	}
	if (distinct_letters.size() % 2 == 0)cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
}

