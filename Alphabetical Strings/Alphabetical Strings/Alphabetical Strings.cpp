#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string input, output = "YES";
		int left_pointer, right_pointer;
		cin >> input;
		left_pointer = input.find('a') - 1;
		right_pointer = input.find('a');
		for (int i = 0, length = input.size(); i < length; i++)
		{
			if (input.find('a' + i) == -1) {
				output = "NO";
				break;
			}
			if (left_pointer >= 0 && input[left_pointer] == 'a' + i)left_pointer--;
			else if (right_pointer < length && input[right_pointer] == 'a' + i)right_pointer++;
			else {
				output = "NO";
				break;
			}
		}
		cout << output << endl;
	}
}

