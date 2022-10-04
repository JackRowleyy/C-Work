#include "myFunctions.h" // user-defined class, included using "" 
#include <iostream> // system i/o class, included using <> 
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
	// cout: print results to screen 
	cout << iAdd(12, 13) << "\n"; // newline operator 

	cout << divideXbyY(1, 2) << endl; // newline operator 
	cout << divideXbyY(1.0, 2.0) << endl;
	cout << divideXbyY(16.0, 0.0) << endl;

	cout << Log(20.0) << endl;
	cout << Log(0.0) << endl;
	cout << Sqrt(20.0) << endl;
	cout << Sqrt(-2.0) << endl;
	int no1;
	int no2;
	int no3;

	printf("Enter No. 1: ");
	cin >> no1;
	printf("Enter No. 2: ");
	cin >> no2;
	printf("Enter No. 3: ");
	cin >> no3;
	main1(no1, no2, no3);
	return 0;
}