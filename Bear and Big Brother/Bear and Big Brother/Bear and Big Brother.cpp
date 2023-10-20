#include <iostream>
using namespace std;

int main()
{
    int i;
    float weight_of_Limak, weight_of_Bob;
    cin >> weight_of_Limak >> weight_of_Bob;
    for (i = 0; 1 <= weight_of_Bob / weight_of_Limak * pow(2.0 / 3, i); i++);
    cout << i;
}
