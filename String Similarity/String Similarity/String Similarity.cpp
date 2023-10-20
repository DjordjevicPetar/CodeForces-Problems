#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_cases, length_of_similar_string;
	string inputed_string, similar_string;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> length_of_similar_string >> inputed_string;
		for (int i = 0; i < length_of_similar_string; i++)
		{
			similar_string.push_back(inputed_string.at(i * 2));
		}
		cout << similar_string << endl;
		similar_string.clear();
	}
}

