#include <iostream>
#include <string>
using namespace std;

void main()
{
	string news, looking_for = "heidi";
	int j = 0;
	cin >> news;
	for (int i = 0, length = news.size(); i < length; i++)if (news[i] == looking_for[j])j++;
	cout << ((j == 5)?"YES":"NO");
}