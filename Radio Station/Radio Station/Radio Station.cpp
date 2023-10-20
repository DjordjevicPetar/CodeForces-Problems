#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int servers, commands;
	map<string, string> ip_servers;
	cin >> servers >> commands;
	while (servers--)
	{
		string name, ip;
		cin >> name >> ip;
		ip_servers[ip + ";"] = name;
	}
	while (commands--)
	{
		string command, ip, name;
		cin >> command >> ip;
		cout << command << " " << ip << " #" << ip_servers[ip] << endl;
	}
}
