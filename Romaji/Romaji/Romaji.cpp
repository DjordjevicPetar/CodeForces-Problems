#include <iostream>
#include <string>
using namespace std;

bool Berlanese(string s) {
	string vowels = "aeiou";
	for (int i = 0; i < s.length(); i++)
		if (s[i] != 'n' && vowels.find(s[i]) == -1 && vowels.find(s[i + 1]) == -1)return false;
	return true;
}
int main()
{
	string s;
	cin >> s;
	cout << ((Berlanese(s) ? "YES" : "NO")) << endl;
}
