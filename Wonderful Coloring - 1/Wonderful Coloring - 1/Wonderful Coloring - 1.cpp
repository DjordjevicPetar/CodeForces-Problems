#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string input;
		int number_of_red_colored_blocks = 0;
		bool there_is_unpaired = false;
		set<char> letters;
		cin >> input;
		letters.insert(input.begin(), input.end());
		for (set<char>::iterator itr = letters.begin(); itr != letters.end(); itr++)
		{
			if (count(input.begin(), input.end(), *itr) >= 2)
			{
				number_of_red_colored_blocks++;
			}
			else if (there_is_unpaired)
			{
				there_is_unpaired = false;
				number_of_red_colored_blocks++;
			}
			else there_is_unpaired = true;
		}
		cout << number_of_red_colored_blocks << endl;
	}
}