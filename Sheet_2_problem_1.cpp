#include <iostream>
using namespace std;
int main()
{
	int simpleInterest , principalAmount , rateOfInterestPerYear , timeInYears;
    cout << "enter Principal Amount" << endl;
    cin >> principalAmount;
    cout << "enter Rate Of Interest Per Year" << endl;
    cin >> rateOfInterestPerYear;
    cout << "enter Time In Years" << endl;
    cin >> timeInYears;
    simpleInterest = principalAmount * rateOfInterestPerYear * timeInYears / 100;
    cout << " simple Interest = "<< simpleInterest << endl;
    system ("pause"); // for Microsoft visual studio 2010
    return 0;
}
