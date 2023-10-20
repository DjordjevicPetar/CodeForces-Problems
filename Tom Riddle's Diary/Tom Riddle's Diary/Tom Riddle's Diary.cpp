#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	int n;
	set<string> s;
	string input;
	cin >> n;
	while (n--)
	{
		cin >> input;
		if (s.find(input) == s.end())
		{
			cout << "NO" << endl;
			s.insert(input);
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}
