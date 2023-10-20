#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void Program() {
	int length;
	vector<int> arr;
	string s;
	map<int, char> translation;
	cin >> length;
	arr.reserve(length);
	for (int i = 0, temp; i < length; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	cin >> s;
	for (int i = 0; i < length;i++ ) {
		if (translation.find(arr[i]) == translation.end()) {
			translation[arr[i]] = s[i];
			continue;
		}
		if (translation[arr[i]] != s[i]) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)Program();
}