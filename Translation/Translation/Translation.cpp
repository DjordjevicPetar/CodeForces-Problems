#include <iostream>
#include <string>
using namespace std;

int main()
{
    string translated, translation;
    cin >> translated >> translation;
    if (translated.size() != translation.size()) {
        cout << "NO";
        return 0;
    }
    for (int i = 0, size = translated.size(); i < size; i++)
    {
        if (translated[size - i - 1] != translation[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
