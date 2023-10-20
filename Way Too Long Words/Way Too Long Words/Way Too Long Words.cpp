#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
	vector<string> words;
	int number_of_words;
	cin >> number_of_words;
	for (int i = 0; i < number_of_words; i++) {
		string word;
		cin >> word;
		if (word.size() > 10)
		{
			word = word.at(0) + to_string(word.size() - 2) + word.back();
		}
		words.push_back(word);
	}
	for (int i = 0; i < number_of_words; i++)cout << words.at(i) << endl;
}
