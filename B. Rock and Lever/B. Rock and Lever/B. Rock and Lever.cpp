#include <iostream>
#include <map>
using namespace std;

int Ones_In(int num) {
    int count = 0;
    while ((num >>= 1) != 0)count++;
    return count;
}

void Program() {
    map<int, int> inside;
    int length;
    long long total = 0;
    cin >> length;
    for (int i = 0, temp; i < length; i++)
    {
        cin >> temp;
        inside[Ones_In(temp)]++;
    }
    for (pair<int, int> item : inside)total += (long long)item.second * (item.second - 1) / 2;
    cout << total << endl;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)Program();
}