#include <iostream>
#include <string>
using namespace std;

int main()
{
    string winners;
    int number_of_matches, antons_wins = 0;
    cin >> number_of_matches >> winners;
    for (char winner : winners) if (winner == 'A')antons_wins++;
    if (antons_wins * 2 > number_of_matches)cout << "Anton";
    else if (antons_wins * 2 == number_of_matches)cout << "Friendship";
    else cout << "Danik";
}