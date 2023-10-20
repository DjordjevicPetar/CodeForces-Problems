#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string equation;
    vector<int> numbers;
    cin >> equation;
    for (int i = 0; i < equation.size(); i+=2)
    {
        numbers.push_back(equation.at(i) - '0');
    }
    sort(numbers.begin(),numbers.end());
    cout << numbers.at(0);
    for (int i = 1; i < numbers.size(); i++)
    {
        cout << "+" + to_string(numbers.at(i));
    }
}