#include <iostream>
#include <string>
using namespace std;

int main()
{
	string vowels = "aeiouy";
	string input;
	cin >> input;
	for(char letter : input)
	{
		letter = tolower(letter);
		if (vowels.find(letter) == string::npos)cout << "." << letter;
	}
}
