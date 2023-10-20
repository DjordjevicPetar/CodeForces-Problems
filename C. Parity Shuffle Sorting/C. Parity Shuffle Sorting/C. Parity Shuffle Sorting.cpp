#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int test_cases, length;
	cin >> test_cases;
	while (test_cases--) {
		int count = 0;
		string output = "";
		vector<int> arr;
		cin >> length;
		for (int i = 0, temp; i < length; i++)
		{
			cin >> temp;
			arr.push_back(temp);
		}
		if (arr[0] != arr[length - 1]) {
			if ((arr[0] + arr[length - 1]) % 2)arr[length - 1] = arr[0];
			else arr[0] = arr[length - 1];
			count++;
			output += to_string(1) + " " + to_string(length) + "\n";
		}
		for (int i = 1; i < length - 1; i++)
		{
			if (arr[i] == arr[0])continue;
			if ((arr[0] + arr[i]) % 2) {
				count++;
				output += to_string(1) + " " + to_string(i + 1) + "\n";
			}
			else{
				count++;
				output += to_string(i + 1) + " " + to_string(length) + "\n";
			}
		}
		cout << count << endl << output;
	}
}