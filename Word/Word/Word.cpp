#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string word;
	int upper = 0;
	cin >> word;
	for (int i = 0; i < word.size(); i++)if (isupper(word[i]))upper++;
	if (upper > word.size() - upper)transform(word.begin(), word.end(), word.begin(), toupper);
	else transform(word.begin(), word.end(), word.begin(), tolower);
	cout << word;
}