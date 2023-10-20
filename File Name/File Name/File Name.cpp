#include <iostream>
#include <string>
using namespace std;

int main()
{
	int length, place_of_xxx, number_of_removed_x = 0;
	string mail;
	cin >> length >> mail;
	while ((place_of_xxx = mail.find("xxx")) != -1)
	{
		number_of_removed_x++;
		mail.erase(place_of_xxx, 1);
	}
	cout << number_of_removed_x;
}
