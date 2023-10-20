#include <iostream>
using namespace std;

int main()
{
    int num, money, price, needed;
    cin >> price >> money >> num;
    needed = num * (num + 1) * price / 2 - money;
    cout << ((needed < 0)?0:needed);
}
