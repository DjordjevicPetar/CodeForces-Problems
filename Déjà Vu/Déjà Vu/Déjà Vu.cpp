#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string word;
		cin >> word;
		if (word.size() == count(word.begin(), word.end(), 'a'))
		{
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		for (int i = 0, length = word.size(); i < length; i++)
			if (word[length - i - 1] != 'a') {
				cout << word.substr(0, i) + 'a' + word.substr(i, length - i) << endl;
				break;
			}
	}
}