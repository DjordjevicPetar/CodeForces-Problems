#include <iostream>
#include <string>
#include <algo>
using namespace std;

void main()
{
	int length;
	string given, perfect = "";
	cin >> length >> given;
	if (given.find('0') == string::npos) {
		cout << given;
		return;
	}
	if (given.find('1') == string::npos)
	{
		cout << "0";
		return;
	}
	for (int i = given.find('0'), j = given.find_last_of("0"); i <= j; i++)perfect.append((given[i] == '1') ? "0" : "1");
	for (int i = 0; i <= perfect.length(); i++)
	{
		if (given.find(perfect.substr(0, perfect.length() - i)) != string::npos) {
			string ones(given.find('0') + perfect.length() - i, '1');
			cout << ones << given.substr(given.find('0') + perfect.length() - i);
			return;
		}
	}

}