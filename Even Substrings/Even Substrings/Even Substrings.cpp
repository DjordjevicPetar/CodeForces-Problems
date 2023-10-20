#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, output = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++)if (s[i] % 2 == 0)output += i + 1;
	cout << output << endl;
}
