#include <iostream>
#include <string>
using namespace std;

int Days(string word) {
	char remembered[3];
	bool found;
	int j = 0, output = 0;
	while (true)
	{
		remembered[0] = word[j++];
		for (int i = 1;; i++, j++)
		{
			if (j == word.length())break;
			found = find(remembered, remembered + i, word[j]) != remembered + i;
			if (!found && i != 3)remembered[i] = word[j];
			else if (!found && i == 3)break;
			else i--;
		}
		output++;
		if (j == word.length())return output;
	}
}

int main()
{
	int num_of_entrys;
	string word;
	cin >> num_of_entrys;
	while (num_of_entrys--) {
		cin >> word;
		cout << Days(word) << '\n';
	}
}