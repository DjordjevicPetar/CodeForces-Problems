#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	char largest;
	cin >> s;
	largest = *max_element(s.begin(), s.end());
	cout << string(count(s.begin(), s.end(), largest), largest) << endl;
}
