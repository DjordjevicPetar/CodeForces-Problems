#include <iostream>
#include <string>
using namespace std;

int main()
{
	int length, max_occurences = 0;
	string s, twogram;
	cin >> length >> s;
	for (int i = 0, occurences = 0; i < length - 1; i++, occurences = 0) {
		int j = i - 1;
		while ((j = s.find(s.substr(i, 2), j + 1)) != -1)occurences++;
		if (max_occurences < occurences) {
			max_occurences = occurences;
			twogram = s.substr(i, 2);
		}
	}
	cout << twogram;
}
