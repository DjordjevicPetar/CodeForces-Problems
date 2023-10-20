#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num_of_books, total_time, input, max_books = 0;
	vector<int> books;
	cin >> num_of_books >> total_time;
	books.reserve(num_of_books);
	for (int i = 0; i < num_of_books; i++)
	{
		cin >> input;
		books.push_back(input);
	}
	for (int i = 0, j = 0; i < num_of_books; i++)
	{
		total_time -= books[i];
		if (total_time < 0) {
			total_time += books[j];
			j++;
		}
		if (i - j + 1 > max_books)max_books = i - j + 1;
	}
	cout << max_books << endl;
}