// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/12/19

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	float sugarNeeded = 1.5 / 48;
	float butterNeeded = 1.0 / 48;
	float flourNeeded = 2.75 / 48;

	int numOfCookies;
	cout << "Enter the number of cookies that you would like to bake: ";
	cin >> numOfCookies;

	float sugar = numOfCookies * sugarNeeded;
	float butter = numOfCookies * butterNeeded;
	float flour = numOfCookies * flourNeeded;

	cout << "\nTo make " << numOfCookies << " cookies you will need: \n";
	cout << sugar << " cups of sugar.\n";
	cout << butter << " cups of butter.\n";
	cout << flour << " cups of flour.\n";
}
