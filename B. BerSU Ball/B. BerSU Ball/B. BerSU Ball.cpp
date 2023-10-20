#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num_of_boys, num_of_girls, counter = 0, i = 0, j = 0;
    vector<int> boys, girls;
    cin >> num_of_boys;
    boys.reserve(num_of_boys);
    for (int i = 0, j; i < num_of_boys; i++,boys.push_back(j))cin >> j;
    sort(boys.begin(), boys.end());
    cin >> num_of_girls;
    girls .reserve(num_of_girls);
    for (int i = 0, j; i < num_of_girls; i++, girls.push_back(j))cin >> j;
    sort(girls.begin(), girls.end());
    while (i < num_of_boys && j < num_of_girls)
    {
        if (max(boys[i], girls[j]) - min(boys[i], girls[j]) < 2) {
            counter++;
            i++;
            j++;
        }
        else (boys[i] < girls[j]) ? i++ : j++;
    }
    cout << counter;
}