#include <iostream>
#include <string>
using namespace std;

int main()
{
	string encrypted, decrypted = "";
	cin >> encrypted;
	int length = encrypted.size(), center = (length - 1) / 2;
	for (int i = 0; center - i >= 0; i++)
	{
		decrypted += encrypted[center - i];
		if (center + i + 1 < length)decrypted += encrypted[center + i + 1];
	}
	cout << decrypted << endl;
}

