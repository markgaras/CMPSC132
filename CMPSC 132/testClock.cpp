#include "clockType.h"
#include <iostream>
using namespace std;

int main()
{
	clockType myClock;
	clockType yourClock;

	cout << "Please enter time (hh:mm:ss:)  ";
	cin >> myClock;

	cout << "The time on my clock is " << myClock << endl;

	myClock.incrementSeconds();

	cout << "And one second later it is " << myClock << endl;

	system("pause");
	return 0;

	yourClock = myClock;
}