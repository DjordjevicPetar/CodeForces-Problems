#include <iostream>
using namespace std;

int Program(int current, int goal) {
    int mul = 1, diff;
    while (current * mul < goal)mul *= 2;
    for (diff = 0; current * mul >= goal; current--, diff++);
    current++;
    if (current * mul == goal)return diff + log2(mul) - 1;
    return diff + Program(current * 2, goal);
}

int main()
{
    int current, goal;
    cin >> current >> goal;
    cout << Program(current, goal) << endl;
}
