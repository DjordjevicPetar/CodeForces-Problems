#include <iostream>
#include <map>
using namespace std;

void Program() {
    int length;
    map<int, int> arr;
    cin >> length;
    for (int i = 0, temp; i < length; i++)
    {
        cin >> temp;
        arr[temp]++;
    }
    for (pair<int, int> item : arr)
    {
        if (item.second > 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)Program();
}