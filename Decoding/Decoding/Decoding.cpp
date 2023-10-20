#include <iostream>
#include <string>
using namespace std;

int main()
{
	int length;
	string decoded, encoded = "";
	cin >> length >> decoded;
	for (char ch : decoded)((length - encoded.length()) % 2) ? encoded.append(1, ch) : encoded.insert(0, 1, ch);
	cout << encoded << endl;
}