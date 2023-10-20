#include <iostream>
#include <string>
using namespace std;

int main()
{
	string output(" ");
	char added[3] = { 'W', 'U', 'B' }, letter;
	int sus = 0;
	while ((letter = getchar()) != '\n')
	{
		output += letter;
		if ((letter == added[sus] || (sus = 0) == -1 || letter == added[sus]) && ++sus == 3)
		{
			output.erase(output.length() - 3, 3);
			output += output.back() == ' ' ? "" : " ";
			sus = 0;
		}
	}
	cout << output.substr(1);
}