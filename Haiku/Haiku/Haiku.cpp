#include <iostream>
#include <string>
using namespace std;

int main()
{
	char syllables[5] = { 'a', 'e', 'i', 'o', 'u' };
	int num_of_syl[3] = { 5, 7, 5 }, index = 0, syl;
	string line;
	getline(cin, line);
	while (line != "")
	{
		syl = 0;
		for (char ch : syllables)syl += count(line.begin(),line.end(), ch);
		if (num_of_syl[index] != syl)break;
		index++;
		getline(cin, line);
	}
	cout << ((index == 3) ? "YES" : "NO");
}
