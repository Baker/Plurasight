#include <iostream>

using namespace std; 

int main()
{
	int answer = 23;
	int guess;
	bool notguessed = true;
	while (notguessed)
	{
		cout << "Guess my number: ";
		cin >> guess;
		if (guess == answer)
		{
			cout << "Yes!" << endl;
			notguessed = false;
		}
		if (guess < answer)
		{
			cout << "Not high enough.." << endl;
		}
		if (guess > answer)
		{
			cout << "Not low enough.." << endl;
		}
	}
}