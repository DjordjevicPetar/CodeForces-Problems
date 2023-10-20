#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;
	int i = 0, s_len = s.length(), t_len = t.length();
	while (s_len - i - 1 != -1 && t_len - i - 1 != -1 && s[s_len - i - 1] == t[t_len - i - 1])i++;
	cout << s_len + t_len - 2 * i << endl;
}