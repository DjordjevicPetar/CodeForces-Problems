#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first_alphabet, second_alphabet, message, translated;
	cin >> first_alphabet >> second_alphabet >> message;
	for (char ch:message)
	{
		if (!isalpha(ch))
		{
			translated += ch;
			continue;
		}
		char letter = second_alphabet[first_alphabet.find(tolower(ch))];
		translated += (isupper(ch) ? toupper(letter) : letter);
	}
	cout << translated << endl;
}
