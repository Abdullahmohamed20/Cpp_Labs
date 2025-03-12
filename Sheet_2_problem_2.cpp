#include<iostream>
using namespace std;
int main()
{
    double subject1 , subject2 , subject3 , totalMarks , average;
    cout << "enter marks for subject 1: ";
    cin>> subject1;
    cout << "enter marks for subject 2: ";
    cin >> subject2;
    cout << "enter marks for subject 3: ";
    cin >> subject3;
    totalMarks= subject1 +subject2 + subject3;
    average= totalMarks / 3;
    cout << "Average marks = " <<average<< endl;
    if (average>=50)
     {
     	cout << "status: passed" << endl;
     }
     else
     {
     	cout << "status: failed" << endl;
     }
     system ("pause"); // for Microsoft visual studio 2010
    return 0;
}
