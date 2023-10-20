#include <iostream>
#include <string>
using namespace std;

int main()
{
	int length;
	string s;
	cin >> length >> s;
	if (count(s.begin(), s.end(), '1') != count(s.begin(), s.end(), '0'))
	{
		cout << 1 << endl << s << endl;
	}
	else
	{
		cout << 2 << endl << s[0] << " " << s.substr(1) << endl;
	}
}

