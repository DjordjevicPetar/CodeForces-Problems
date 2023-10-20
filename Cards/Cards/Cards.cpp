#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number_of_letters;
	string letters;
	cin >> number_of_letters >> letters;
	for (int i = 0, occurences = count(letters.begin(), letters.end(), 'n'); i < occurences; i++)cout << "1 ";
	for (int i = 0, occurences = count(letters.begin(), letters.end(), 'z'); i < occurences; i++)cout << "0 ";
}

