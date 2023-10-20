#include <iostream>
#include <string>
using namespace std;

int main()
{
	int horizontal, vertical, test_cases;
	string commands;
	bool pos_hor, pos_ver;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> horizontal >> vertical >> commands;
		pos_hor = (horizontal < 0) ? count(commands.begin(), commands.end(), 'L') >= abs(horizontal) : count(commands.begin(), commands.end(), 'R') >= horizontal;
		pos_ver = (vertical < 0) ? count(commands.begin(), commands.end(), 'D') >= abs(vertical) : count(commands.begin(), commands.end(), 'U') >= vertical;
		if (pos_hor && pos_ver)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}