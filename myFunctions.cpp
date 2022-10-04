
#include "myFunctions.h" 
#include <iostream>
#include <cmath>


using namespace std;

int iAdd(int a, int b)
{
	return a + b;
}
double divideXbyY(double x, double y)
{
	return x / y;
}
int divideXbyY(int x, int y)
{
	return x / y;
}
double Log(double x) {
	
	if (x > 0) {
		return log(x);
	}
	else {
		cout << "invalid input" << endl;
	}
}
double Sqrt(double x) {
	if (x >= 0) {
		return sqrt(x);
	}
	else {
		cout << "invalid input" << endl;
	}
}
void main1(int i, int j, int k) {
	int mid;
	int hi;
	int low;
	    
	if (i > j) {
		mid = i;
		low = j;
	}
	else {
		mid = j;
		low = i;
	}
	
		

	if (mid > k) {
		hi = mid;
		if (low > k) {
			mid = low;
			low = k;
		}
		else {
			mid = k;
		}

	}
	else hi = k;
		

	
		
	
	
	cout << low;
	cout << mid;
	cout << hi;
	
}